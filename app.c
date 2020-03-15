#include "app.h"

void run(){



    char file_name[MAX_SIZE] ;

    FILE * pointer_to_file ;

    int choose_to_stay = 1 ;

    int do_operation = 1 ;


    get_last_sections_data();    
    
    
    puts(ANSI_COLOR_YELLOW Bold"\t\t\t\t\thello,minions!\n"ANSI_COLOR_RESET);

    do{

        do_operation = 1 ;
   
        switch(get_process_choise()){

                case CHOOSE_TO_INSERT_NEW_KP : switch(get_file_name_choise()){

                            case MOVE_FORWARD_KP_TXT : strcpy (file_name,"move_forward_kp.txt");
                                    break ;

                            case MOVE_BACKWARD_KP_TXT: strcpy (file_name,"move_backward_kp.txt");
                                    break ;
                
                            case MOVE_RIGHT_SIDE_KP_TXT: strcpy (file_name,"move_right_side_kp.txt");
                                    break ;

                            case MOVE_LEFT_SIDE_KP_TXT: strcpy (file_name,"move_left_side_kp.txt");
                                    break ;

                            case MOVE_RIGHT_DIAGONAL_UP_KP_TXT: strcpy (file_name,"move_right_diagonal_up_kp.txt");
                                    break ;

                            case MOVE_RIGHT_DIAGONAL_DOWN_KP_TXT: strcpy (file_name,"move_right_diagonal_down_kp.txt");
                                    break ;

                            case MOVE_LEFT_DIAGONAL_UP_KP_TXT: strcpy (file_name,"move_left_diagonal_up_kp.txt");
                                    break ;

                            case MOVE_LEFT_DIAGONAL_DOWN_KP_TXT: strcpy (file_name,"move_left_diagonal_down_kp.txt");
                                    break ;

                            default :    do_operation = 0 ;      
                                    break;        

                        }

                        if(do_operation){

                                if(get_data_from_user(file_name)){
                                                
                                        puts(ANSI_COLOR_BLUE Bold "new node added succesfully\n"ANSI_COLOR_RESET);
                
                                }else{
                                        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "new node didnot add succesfully.\a" ANSI_COLOR_RESET);
                                                        
                                }

                        }

                        
                        break;


            case CHOOSE_TO_SHOW_KPS:     switch(get_file_name_choise()){
                            
                            case MOVE_FORWARD_KP_TXT: strcpy (file_name,"move_forward_kp.txt");                                        
                                    break ;

                            case MOVE_BACKWARD_KP_TXT: strcpy (file_name,"move_backward_kp.txt");
                                    break ;
                
                            case MOVE_RIGHT_SIDE_KP_TXT: strcpy (file_name,"move_right_side_kp.txt");
                                    break ;

                            case MOVE_LEFT_SIDE_KP_TXT: strcpy (file_name,"move_left_side_kp.txt");
                                    break ;

                            case MOVE_RIGHT_DIAGONAL_UP_KP_TXT: strcpy (file_name,"move_right_diagonal_up_kp.txt");    
                                    break ;

                            case MOVE_RIGHT_DIAGONAL_DOWN_KP_TXT: strcpy (file_name,"move_right_diagonal_down_kp.txt");    
                                    break ;

                            case MOVE_LEFT_DIAGONAL_UP_KP_TXT: strcpy (file_name,"move_left_diagonal_up_kp.txt");    
                                    break ;

                            case MOVE_LEFT_DIAGONAL_DOWN_KP_TXT: strcpy (file_name,"move_left_diagonal_down_kp.txt");
                                    break ;
                        
                            default : do_operation = 0 ;   
                                    break ; 

                        }

                        if(do_operation){

                                if(show_linked_list(file_name)){
                                                
                                puts(ANSI_COLOR_BLUE Bold "Linked list showed succesfully\n"ANSI_COLOR_RESET);
                
                                }else{
                                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "Linked list didnot show succesfully.\a" ANSI_COLOR_RESET);
                                                        
                                }  

                        }
                                  
                             
                        break ;

            case CHOOSE_TO_SORT:     switch(get_sorting_type()){

                            case SORT_BY_KPS:     switch(get_file_name_choise()){

                                            case MOVE_FORWARD_KP_TXT : strcpy (file_name,"move_forward_kp.txt");                    
                                                    break ;

                                            case MOVE_BACKWARD_KP_TXT: strcpy (file_name,"move_backward_kp.txt");                    
                                                    break ;
                                
                                            case MOVE_RIGHT_SIDE_KP_TXT: strcpy (file_name,"move_right_side_kp.txt");                    
                                                    break ;

                                            case MOVE_LEFT_SIDE_KP_TXT: strcpy (file_name,"move_left_side_kp.txt");                    
                                                    break ;

                                            case MOVE_RIGHT_DIAGONAL_UP_KP_TXT: strcpy (file_name,"move_right_diagonal_up_kp.txt");                    
                                                    break ;

                                            case MOVE_RIGHT_DIAGONAL_DOWN_KP_TXT: strcpy (file_name,"move_right_diagonal_down_kp.txt");                    
                                                    break ;

                                            case MOVE_LEFT_DIAGONAL_UP_KP_TXT: strcpy (file_name,"move_left_diagonal_up_kp.txt");                    
                                                    break ;

                                            case MOVE_LEFT_DIAGONAL_DOWN_KP_TXT: strcpy (file_name,"move_left_diagonal_down_kp.txt");                    
                                                    break ;

                                            default : do_operation = 0 ;
                                                        break ; 
                                                
                                        }

                                        
                                        if(do_operation){

                                                if (is_file_exist(file_name))
                                                {
                                                if(bubble_sort_linked_list(file_name,SORT_BY_KPS)){
                                                                
                                                        puts(ANSI_COLOR_BLUE Bold "Linked list sorted succesfully\n"ANSI_COLOR_RESET);
                                
                                                }else{
                                                        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "Linked list didnot sort succesfully.\a" ANSI_COLOR_RESET);
                                                        
                                                }            
                                                }else{

                                                } 

                                        }
   
                                        break;

                            case SORT_BY_DIFF:     switch(get_file_name_choise()){

                                            case MOVE_FORWARD_KP_TXT: strcpy (file_name,"move_forward_kp.txt");
                                                     break ;
                                                    
                                            case MOVE_BACKWARD_KP_TXT : strcpy (file_name,"move_backward_kp.txt");
                                                    break ;
                                
                                            case MOVE_RIGHT_SIDE_KP_TXT: strcpy (file_name,"move_right_side_kp.txt");
                                                     break ;

                                            case MOVE_LEFT_SIDE_KP_TXT: strcpy (file_name,"move_left_side_kp.txt");
                                                     break ;

                                            case MOVE_RIGHT_DIAGONAL_UP_KP_TXT: strcpy (file_name,"move_right_diagonal_up_kp.txt");
                                                     break ;

                                            case MOVE_RIGHT_DIAGONAL_DOWN_KP_TXT: strcpy (file_name,"move_right_diagonal_down_kp.txt");
                                                     break ;

                                            case MOVE_LEFT_DIAGONAL_UP_KP_TXT: strcpy (file_name,"move_left_diagonal_up_kp.txt");
                                                     break ;

                                            case MOVE_LEFT_DIAGONAL_DOWN_KP_TXT: strcpy (file_name,"move_left_diagonal_down_kp.txt");
                                                     break ;

                                            default : do_operation = 0 ;
                                                        break ;        
                                        }

                                        if(do_operation){

                                                if (is_file_exist(file_name))
                                                {
                                                if(bubble_sort_linked_list(file_name,SORT_BY_DIFF)){
                                                                
                                                        puts(ANSI_COLOR_BLUE Bold "Linked list sorted succesfully\n"ANSI_COLOR_RESET);
                                
                                                }else{
                                                        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "Linked list didnot sort succesfully.\a" ANSI_COLOR_RESET);
                                                        
                                                }            
                                                }else{

                                                }

                                        }



                                        break;
                             default :       ;
                                        break ;

                    }
                    
                        break ;

            case CHOOSE_TO_EXIT:     choose_to_stay = 0 ;
                        break ;

            default :   puts(ANSI_COLOR_RED Bold "ERROR in first switch block"ANSI_COLOR_RESET);
                         break;

        }

    }while(choose_to_stay);
    

    puts(ANSI_COLOR_YELLOW Bold "\t\t\t\t\tTHANKS"ANSI_COLOR_RESET);



}