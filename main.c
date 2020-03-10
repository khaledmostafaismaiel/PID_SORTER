#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "helper.c"
#include "linked_list.c"
#include "files.c"
 


int main(){

    char file_name[MAX_SIZE] ;

    FILE * pointer_to_file ;

    int choose_to_stay = 1 ;


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

            default :    ;      
                        break;        

        }


        insertToLinkedList(file_name,READ_FROM_FILES);                    


    }    
    
    puts(ANSI_COLOR_YELLOW Bold"\t\t\t\t\thello,minions!\n"ANSI_COLOR_RESET);

    do{
            
        switch(get_process_choise()){

            case 1:     switch(get_file_name_choise()){

                            case 1: strcpy (file_name,"move_forward_kp.txt");
                                    break ;

                            case 2: strcpy (file_name,"move_backward_kp.txt");
                                    break ;
                
                            case 3: strcpy (file_name,"move_right_side_kp.txt");
                                    break ;

                            case 4: strcpy (file_name,"move_left_side_kp.txt");
                                    break ;


                            case 5: strcpy (file_name,"move_right_diagonal_up_kp.txt");
                                    break ;

                            case 6: strcpy (file_name,"move_right_diagonal_down_kp.txt");
                                    break ;

                            case 7: strcpy (file_name,"move_left_diagonal_up_kp.txt");
                                    break ;

                            case 8: strcpy (file_name,"move_left_diagonal_down_kp.txt");
                                    break ;

                            default :    ;      
                                    break;        

                        }

                            pointer_to_file = fopen(file_name, "w");

                                if (pointer_to_file != NULL)
                                {
                                    if(insertToLinkedList(file_name,1)){
                                            
                                        puts(ANSI_COLOR_BLUE Bold "new node added succesfully\n"ANSI_COLOR_RESET);
            
                                        }else{
                                            puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "new node didnot add succesfully.\a" ANSI_COLOR_RESET);
                                                 
                                        }

                                }else{
                                        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "new node didnot add succesfully.\a" ANSI_COLOR_RESET);

                                }   
                            break;


            case 2:     switch(get_file_name_choise()){
                            
                            case 1: strcpy (file_name,"move_forward_kp.txt");
                                    temp_node = move_forward_head_node ;
                                        
                                    break ;
                            case 2: strcpy (file_name,"move_backward_kp.txt");
                                    temp_node = move_backward_head_node ;
                            
                                    break ;
                
                            case 3: strcpy (file_name,"move_right_side_kp.txt");
                                    temp_node = move_right_side_head_node ;
    
                                    break ;

                            case 4: strcpy (file_name,"move_left_side_kp.txt");
                                    temp_node = move_left_side_head_node ;
    
                                    break ;


                            case 5: strcpy (file_name,"move_right_diagonal_up_kp.txt");
                                    temp_node = move_right_diagonal_up_head_node ;
    
                                    break ;

                            case 6: strcpy (file_name,"move_right_diagonal_down_kp.txt");
                                    temp_node = move_right_diagonal_down_head_node ;
    
                                    break ;

                            case 7: strcpy (file_name,"move_left_diagonal_up_kp.txt");
                                    temp_node = move_left_diagonal_up_head_node ;
    
                                    break ;

                            case 8: strcpy (file_name,"move_left_diagonal_down_kp.txt");
                                    temp_node = move_left_diagonal_down_head_node ;
                                    break ;
      

                        }

                            pointer_to_file = fopen(file_name, "r");

                            if (pointer_to_file != NULL)
                            {
                                if(show_linked_list(temp_node)){
                                            
                                    puts(ANSI_COLOR_BLUE Bold "Linked list showed succesfully\n"ANSI_COLOR_RESET);
            
                            }else{
                                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "Linked list didnot show succesfully.\a" ANSI_COLOR_RESET);
                                                 
                                }                                    
                            }else{
                                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "Linked list is empty.\a" ANSI_COLOR_RESET);

                            }                             
            
                        break ;

            case 3:     switch(get_sorting_type()){

                            case 1:     switch(get_file_name_choise()){

                                            case 1: strcpy (file_name,"move_forward_kp.txt");
                                                    
                                                    temp_node = move_forward_head_node ;
                    
                                                    break ;
                                            case 2: strcpy (file_name,"move_backward_kp.txt");
                                        
                                                    temp_node = move_backward_head_node ;
                    
                                                    break ;
                                
                                            case 3: strcpy (file_name,"move_right_side_kp.txt");

                                                    temp_node = move_right_side_head_node ;
                    
                                                    break ;

                                            case 4: strcpy (file_name,"move_left_side_kp.txt");

                                                    temp_node = move_left_side_head_node ;
                    
                                                    break ;


                                            case 5: strcpy (file_name,"move_right_diagonal_up_kp.txt");

                                                    temp_node = move_right_diagonal_up_head_node ;
                    
                                                    break ;

                                            case 6: strcpy (file_name,"move_right_diagonal_down_kp.txt");

                                                    temp_node = move_right_diagonal_down_head_node ;
                    
                                                    break ;

                                            case 7: strcpy (file_name,"move_left_diagonal_up_kp.txt");

                                                    temp_node = move_left_diagonal_up_head_node ;
                    
                                                    break ;

                                            case 8: strcpy (file_name,"move_left_diagonal_down_kp.txt");

                                                    temp_node = move_left_diagonal_down_head_node ;
                    
                                                    break ;

                                                
                                        }

                                        pointer_to_file = fopen(file_name, "r");

                                        if (pointer_to_file != NULL)
                                        {
                                            if(bubble_sort_linked_list(move_forward_head_node,SORT_BY_KPS)){
                                                            
                                                puts(ANSI_COLOR_BLUE Bold "Linked list sorted succesfully\n"ANSI_COLOR_RESET);
                            
                                            }else{
                                                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "Linked list didnot sort succesfully.\a" ANSI_COLOR_RESET);
                                                
                                            }            
                                        }else{

                                        }    
                                        break;

                            case 2:     switch(get_file_name_choise()){

                                            case 1: strcpy (file_name,"move_forward_kp.txt");
                                                    
                                                    temp_node = move_forward_head_node ;
                    
                                                    break ;
                                            case 2: strcpy (file_name,"move_backward_kp.txt");
                                        
                                                    temp_node = move_backward_head_node ;
                    
                                                    break ;
                                
                                            case 3: strcpy (file_name,"move_right_side_kp.txt");

                                                    pointer_to_file = fopen(file_name, "r");

                                                    temp_node = move_right_side_head_node ;
                    
                                                    break ;

                                            case 4: strcpy (file_name,"move_left_side_kp.txt");

                                                    pointer_to_file = fopen(file_name, "r");

                                                    temp_node = move_left_side_head_node ;
                    
                                                    break ;


                                            case 5: strcpy (file_name,"move_right_diagonal_up_kp.txt");

                                                    pointer_to_file = fopen(file_name, "r");

                                                    temp_node = move_right_diagonal_up_head_node ;
                    
                                                    break ;

                                            case 6: strcpy (file_name,"move_right_diagonal_down_kp.txt");

                                                    pointer_to_file = fopen(file_name, "r");

                                                    temp_node = move_right_diagonal_down_head_node ;
                    
                                                    break ;

                                            case 7: strcpy (file_name,"move_left_diagonal_up_kp.txt");

                                                    pointer_to_file = fopen(file_name, "r");

                                                    temp_node = move_left_diagonal_up_head_node ;
                    
                                                    break ;

                                            case 8: strcpy (file_name,"move_left_diagonal_down_kp.txt");

                                                    pointer_to_file = fopen(file_name, "r");

                                                    temp_node = move_left_diagonal_down_head_node ;
                    
                                                    break ;

                                                
                                        }

                                        pointer_to_file = fopen(file_name, "r");

                                        if (pointer_to_file != NULL)
                                        {
                                            if(bubble_sort_linked_list(temp_node,SORT_BY_DIFF)){
                                                            
                                                puts(ANSI_COLOR_BLUE Bold "Linked list sorted succesfully\n"ANSI_COLOR_RESET);
                            
                                            }else{
                                                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "Linked list didnot sort succesfully.\a" ANSI_COLOR_RESET);
                                                
                                            }            
                                        }else{

                                        }

                                        break;

                    }
                    
                        break ;

            case 4:     choose_to_stay = 0 ;
                        break ;

            default :   puts(ANSI_COLOR_RED Bold "ERROR in first switch block"ANSI_COLOR_RESET);
                         break;

        }

    }while(choose_to_stay);
    

    puts(ANSI_COLOR_YELLOW Bold "\t\t\t\t\tTHANKS"ANSI_COLOR_RESET);


    return 0 ;

}