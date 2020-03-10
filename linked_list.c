#include "linked_list.h"



int get_data_from_user(node * my_node){

    char answer[MAX_SIZE];

    puts("Please enter Kp");
    scanf("%s",answer);
    my_node->KP = atof(answer);


    puts("Please enter gyro_start");
    scanf("%s",answer);
    my_node->gyro_start = atof(answer);


    puts("Please enter gyro_end");
    scanf("%s",answer);
    my_node->gyro_end = atof(answer);


     return 1 ;
}




int insertToLinkedList(char *file_name , int data_source)
{
 
    node * new_node = (node *)malloc(sizeof(node));

    if (new_node == NULL)
    {
        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "HEAP IS UNDERFLOW CAN'T CREAT COMMAND LINKED LIST.\a" ANSI_COLOR_RESET);
        exit(0);
    }

    
    if(strcmp(file_name,"move_forward_kp.txt") == 0){

        if (move_forward_head_node == NULL)
        {

            move_forward_head_node = new_node;
            
            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_forward_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_forward_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }


        }else{

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_forward_current_node->next = new_node;
                    move_forward_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_forward_current_node->next = new_node;
                    move_forward_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }

            }



        }

    }else if(strcmp(file_name,"move_backward_kp.txt") == 0){

        if (move_backward_head_node == NULL)
        {

            move_backward_head_node = new_node;

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_backward_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_backward_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }


        }else{

            if(data_source == READ_FROM_USER){
                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_backward_current_node->next = new_node;
                    move_backward_current_node = new_node ;

                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_backward_current_node->next = new_node;
                    move_backward_current_node = new_node ;

                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }

            }



        }

    }else if(strcmp(file_name,"move_right_side_kp.txt") == 0){

        if (move_right_side_head_node == NULL)
        {

            move_right_side_head_node = new_node;

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_right_side_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_right_side_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }


        }else{

            if(data_source == READ_FROM_USER){


                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_right_side_current_node->next = new_node;
                    move_right_side_current_node = new_node ;
                    
                    }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }


            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_right_side_current_node->next = new_node;
                    move_right_side_current_node = new_node ;
                    
                    }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }
                
            }




        }
        
    }else if(strcmp(file_name,"move_left_side_kp.txt") == 0){

        if (move_left_side_head_node == NULL)
        {

            move_left_side_head_node = new_node;

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_left_side_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_left_side_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }
                
            }

        }else{

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_left_side_current_node->next = new_node;
                    move_left_side_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }

            }else{
                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_left_side_current_node->next = new_node;
                    move_left_side_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }
                
            }





        }
        
    }else if(strcmp(file_name,"move_right_diagonal_up_kp.txt") == 0){

        if (move_right_diagonal_up_head_node == NULL)
        {

            move_right_diagonal_up_head_node = new_node;

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_right_diagonal_up_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_right_diagonal_up_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }
                
            }


        }else{

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_right_diagonal_up_current_node->next = new_node;
                    move_right_diagonal_up_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_right_diagonal_up_current_node->next = new_node;
                    move_right_diagonal_up_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }

            }

        }

    }else if(strcmp(file_name,"move_right_diagonal_down_kp.txt") == 0){

        if (move_right_diagonal_down_head_node == NULL)
        {

            move_right_diagonal_down_head_node = new_node;

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_right_diagonal_down_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_right_diagonal_down_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

                
            }

        }else{

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_right_diagonal_down_current_node->next = new_node;
                    move_right_diagonal_down_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_right_diagonal_down_current_node->next = new_node;
                    move_right_diagonal_down_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }
                
            }


        }


    }else if(strcmp(file_name,"move_left_diagonal_up_kp.txt") == 0){

        if (move_left_diagonal_up_head_node == NULL)
        {

            move_left_diagonal_up_head_node = new_node;
            
            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_left_diagonal_up_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_left_diagonal_up_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }
                
            }


        }else{

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_left_diagonal_up_current_node->next = new_node;
                    move_left_diagonal_up_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_left_diagonal_up_current_node->next = new_node;
                    move_left_diagonal_up_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }
                
            }




        }

    }else if(strcmp(file_name,"move_left_diagonal_down_kp.txt") == 0){

        if (move_left_diagonal_down_head_node == NULL)
        {

            move_left_diagonal_down_head_node = new_node;

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_left_diagonal_down_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_left_diagonal_down_current_node = new_node;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);
                }
                
            }



        }else{

            if(data_source == READ_FROM_USER){

                if(get_data_from_user(new_node)){
                    new_node->next = NULL;
                    move_left_diagonal_down_current_node->next = new_node;
                    move_left_diagonal_down_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }

            }else{

                if(get_data_from_files(new_node,file_name)){
                    new_node->next = NULL;
                    move_left_diagonal_down_current_node->next = new_node;
                    move_left_diagonal_down_current_node = new_node ;
                }else{
                    puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant get_data_from_user from user.\a" ANSI_COLOR_RESET);

                }
                    
            }

        }

    }else{



    }

    if(data_source == READ_FROM_USER){

        if(write_data_in_file(new_node,file_name)){
            return 1;
        }else{
             return 0 ;
        }
    }else{

        return 1 ;

    }


}

int show_linked_list(node * my_node){

    if(my_node == NULL){
        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "your desired linked list is empty.\a" ANSI_COLOR_RESET);
        return 0;

    }else{

    while(my_node != NULL){

        printf("KP = %f\t\t",my_node->KP);
        printf("Gyro_start = %f\t\t",my_node->gyro_start);
        printf("Gyro_end = %f\t\t",my_node->gyro_end);
        printf("diff = %f\n\n",(my_node->gyro_end) - (my_node->gyro_start));

        my_node = my_node->next;
    }
    
        return 1;
    }


}


int bubble_sort_linked_list(node *my_node,int sorting_type){
    
    

    if(my_node == NULL){
        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "your desired linked list is empty.\a" ANSI_COLOR_RESET);
        return 0;
    }else{
        int swapped = 1 ;

        switch(sorting_type){

            case SORT_BY_KPS :  do{
                                     
                                    while (my_node->next != NULL)
                                    {
                                        if(swapCondition(my_node,SORT_BY_KPS)){
                                            my_node = my_node->next;

                                        }else{
                                            swapped = 0;
                                            my_node = my_node->next;

                                        }
                                        
                                        
                                    }    

                                }while (swapped);

                                break ;

            case SORT_BY_DIFF :     do{
                                     
                                    while (my_node->next != NULL)
                                    {
                                        if(swapCondition(my_node,SORT_BY_DIFF)){
                                            my_node = my_node->next;

                                        }else{
                                            swapped = 0;
                                            my_node = my_node->next;

                                        }
                                        
                                    }    

                                }while (swapped);      

                                break ;

            default :           ;
                        break;

        }

    }

}  


void swap(node *my_node,node *my_node_neigheour)
{
  double temp =0;


  temp = my_node->KP;
  my_node->KP = my_node_neigheour->KP;
  my_node_neigheour->KP = temp;

  temp = my_node->gyro_start;
  my_node->gyro_start = my_node_neigheour->gyro_start;
  my_node_neigheour->gyro_start = temp;


  temp = my_node->gyro_end;
  my_node->gyro_end = my_node_neigheour->gyro_end;
  my_node_neigheour->gyro_end = temp;

 }



int swapCondition(node *my_node,int type_of_sorting)
{

    switch(type_of_sorting){

        case SORT_BY_KPS:       if (my_node->KP > my_node->next->KP)
                                {
                                    swap(my_node, my_node->next);
                                    return 1;
                                }

                                break;


        case SORT_BY_DIFF:      if (((my_node->gyro_end)-(my_node->gyro_start)) > ((my_node->next->gyro_end)-(my_node->next->gyro_start)))
                                {
                                swap(my_node, my_node->next);
                                return 1;
                                }

                                break ;

        default :       return 0;
                        break ;

    }

  

}



int write_data_in_file(node * my_node,char *file_name){

    FILE *pointer_to_file ;

    pointer_to_file = fopen(file_name, "w");

    if (pointer_to_file != NULL){
                                            
        fprintf(pointer_to_file, "%f;%f;%f\n", my_node->KP, my_node->gyro_start, my_node->gyro_end);
    
        fclose(pointer_to_file);

        return 1 ;

    }else{
        return 0 ;
    }

}


