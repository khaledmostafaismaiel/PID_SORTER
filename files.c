#include "files.h"


int get_data_from_files(char *file_name)
{

  char singleline[100];

  FILE *pointer_to_file;

  char kp_string[MAX_SIZE] = "empty_file!", gyro_start_string[MAX_SIZE] = "\n", gyro_end_string[MAX_SIZE] = "\n";

  pointer_to_file = fopen(file_name, "r");

  if(pointer_to_file != NULL){

    while (!feof(pointer_to_file))
    {

        fscanf(pointer_to_file, "%[^;]", kp_string);
        fseek(pointer_to_file, 1, SEEK_CUR);

        // Check the idstring has overwritten from file or not
        if (strcmp(kp_string, "empty_file!") == 0)
        {
          // if idstring has not overwritten, then the file contains only a new line.
            return 0 ;

        }else{

        }

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