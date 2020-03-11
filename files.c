#include "files.h"


int get_data_from_files(char *file_name)
{


  char kp_string[MAX_SIZE] = "NULL", gyro_start_string[MAX_SIZE] = "NULL", gyro_end_string[MAX_SIZE] = "NULL";

  FILE *pointer_to_file;

  pointer_to_file = fopen(file_name, "r");

  if(pointer_to_file != NULL){

    while (!feof(pointer_to_file))
    {

        fscanf(pointer_to_file, "%[^;]", kp_string);
        fseek(pointer_to_file, 1, SEEK_CUR);


        fscanf(pointer_to_file, "%[^;]", gyro_start_string);
        fseek(pointer_to_file, 1, SEEK_CUR);

    
        fscanf(pointer_to_file, "%[^\n]", gyro_end_string);
      
        insertToLinkedList(file_name,atof(kp_string),atof(gyro_start_string),atof(gyro_end_string));

      
      }

        fclose(pointer_to_file);
        
        return 1 ;

    }else{
      
      puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "No such file in this directory.\a" ANSI_COLOR_RESET);

      return 1 ;
    
    }



}


int write_data_in_file(char *file_name,float kp,float gyro_start,float gyro_end){

    FILE *pointer_to_file ;

    pointer_to_file = fopen(file_name,"r");

    if (pointer_to_file != "NULL"){

      fclose(pointer_to_file);

      pointer_to_file = fopen(file_name , "a");                                      
      fprintf(pointer_to_file, "\n%f;%f;%f", kp,gyro_start,gyro_end);
      fclose(pointer_to_file);
      return 1 ;

    }else{
      fclose(pointer_to_file);

      pointer_to_file = fopen(file_name , "a");                                      
      fprintf(pointer_to_file, "%f;%f;%f", kp,gyro_start,gyro_end);
      fclose(pointer_to_file);
      return 1 ;    
    }

}

int is_file_exist(char *file_name){

  FILE *pointer_to_file ;

  pointer_to_file = fopen(file_name , "r");

  if(pointer_to_file != "NULL"){
    return 1 ;
  }else{
    return 0 ;
  }

}