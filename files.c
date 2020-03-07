#include "files.h"


int write_data_in_file(node * my_node,char *file_name){

    FILE *pointer_to_file ;

    pointer_to_file = fopen(file_name, "r");

    if (pointer_to_file != NULL){
                                            
        fprintf(pointer_to_file, "%f;%f;%f\n", my_node->KP, my_node->gyro_start, my_node->gyro_end);
    
        fclose(pointer_to_file);

        return 1 ;

    }else{
        fclose(pointer_to_file);
        return 0 ;
    }

}