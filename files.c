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

void get_last_sections_data(){

    char file_name[MAX_SIZE] ;

    for(int i=1 ; i <=8 ; ++i){
        
        switch(i){

                case 1:     strcpy (file_name,"move_forward_kp.txt");
                        break ;

                case 2:     strcpy (file_name,"move_backward_kp.txt");
                        break ;
                
                case 3:     strcpy (file_name,"move_right_side_kp.txt");
                        break ;

                case 4:     strcpy (file_name,"move_left_side_kp.txt");
                        break ;


                case 5:     strcpy (file_name,"move_right_diagonal_up_kp.txt");
                        break ;

                case 6:     strcpy (file_name,"move_right_diagonal_down_kp.txt");
                        break ;

                case 7:     strcpy (file_name,"move_left_diagonal_up_kp.txt");
                        break ;

                case 8:     strcpy (file_name,"move_left_diagonal_down_kp.txt");
                        break ;
       
        }

            get_data_from_files(file_name);                    
        
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