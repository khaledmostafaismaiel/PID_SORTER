#include "linked_list.h"



int get_data_from_user(char *file_name){

    char kp[MAX_SIZE];
    puts("Please enter Kp");
    scanf("%s",kp);

    char gyro_start[MAX_SIZE];
    puts("Please enter gyro_start");
    scanf("%s",gyro_start);

    char gyro_end[MAX_SIZE];
    puts("Please enter gyro_end");
    scanf("%s",gyro_end);

    if(insertToLinkedList(file_name,atof(kp),atof(gyro_start),atof(gyro_end))){

        if(write_data_in_file(file_name,atof(kp),atof(gyro_start),atof(gyro_end))){
            
            return 1 ;
        }else{
            return 0 ;
        }
    
    }else{

        return 0 ;

    }

}


int insertToLinkedList(char *file_name , float kp,float gyro_start ,float gyro_end)
{
 
    node * new_node = (node *)malloc(sizeof(node));

    if (new_node == NULL)
    {
        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "HEAP IS UNDERFLOW CAN'T CREAT COMMAND LINKED LIST.\a" ANSI_COLOR_RESET);
        return 0 ;
    }

    
    if(strcmp(file_name,"move_forward_kp.txt") == 0){

        if (move_forward_head_node == NULL)
        {

            move_forward_head_node = new_node;
            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_forward_current_node = new_node;

        }else{

            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_forward_current_node->next = new_node;
            move_forward_current_node = new_node ;
                
        }

    }else if(strcmp(file_name,"move_backward_kp.txt") == 0){

        if (move_backward_head_node == NULL)
        {

            move_backward_head_node = new_node;
            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_backward_current_node = new_node;

        }else{
            
            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_backward_current_node->next = new_node ;
            move_backward_current_node = new_node ;

        }

    }else if(strcmp(file_name,"move_right_side_kp.txt") == 0){

        if (move_right_side_head_node == NULL)
        {

            move_right_side_head_node = new_node;

            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_right_side_current_node = new_node;


        }else{

            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_right_side_current_node->next = new_node;
            move_right_side_current_node = new_node ;
                    

        }
        
    }else if(strcmp(file_name,"move_left_side_kp.txt") == 0){

        if (move_left_side_head_node == NULL)
        {

            move_left_side_head_node = new_node;


            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_left_side_current_node = new_node;
  

        }else{

            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_left_side_current_node->next = new_node;
            move_left_side_current_node = new_node ;

        }
        
    }else if(strcmp(file_name,"move_right_diagonal_up_kp.txt") == 0){

        if (move_right_diagonal_up_head_node == NULL)
        {

            move_right_diagonal_up_head_node = new_node;

  
            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_right_diagonal_up_current_node = new_node;



        }else{

    
            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_right_diagonal_up_current_node->next = new_node;
            move_right_diagonal_up_current_node = new_node ;


        }

    }else if(strcmp(file_name,"move_right_diagonal_down_kp.txt") == 0){

        if (move_right_diagonal_down_head_node == NULL)
        {

            move_right_diagonal_down_head_node = new_node;


            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_right_diagonal_down_current_node = new_node;


        }else{


            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_right_diagonal_down_current_node->next = new_node;
            move_right_diagonal_down_current_node = new_node ;
 


        }


    }else if(strcmp(file_name,"move_left_diagonal_up_kp.txt") == 0){

        if (move_left_diagonal_up_head_node == NULL)
        {

            move_left_diagonal_up_head_node = new_node;
            
 
            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_left_diagonal_up_current_node = new_node;



        }else{

            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_left_diagonal_up_current_node->next = new_node;
            move_left_diagonal_up_current_node = new_node ;

        }

    }else if(strcmp(file_name,"move_left_diagonal_down_kp.txt") == 0){

        if (move_left_diagonal_down_head_node == NULL)
        {

            move_left_diagonal_down_head_node = new_node;
            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
             move_left_diagonal_down_current_node = new_node;

        }else{

  
            new_node->KP = kp;
            new_node->gyro_start = gyro_start ;
            new_node->gyro_end = gyro_end ;    
            new_node->next = NULL;
            move_left_diagonal_down_current_node->next = new_node;
            move_left_diagonal_down_current_node = new_node ;

        }

    }else{



    }

    return 1 ;
}

int show_linked_list(char *file_name){


    node *temp_node  ;


    if(strcmp(file_name,"move_forward_kp.txt") == 0){
        temp_node = move_forward_head_node ;


    }else if(strcmp(file_name,"move_backward_kp.txt") == 0){
        temp_node = move_backward_head_node ;


    }else if(strcmp(file_name,"move_right_side_kp.txt") == 0){
        temp_node = move_right_side_head_node ;

        
    }else if(strcmp(file_name,"move_left_side_kp.txt") == 0){
        temp_node = move_left_side_head_node ;

        
    }else if(strcmp(file_name,"move_right_diagonal_up_kp.txt") == 0){
        temp_node = move_right_diagonal_up_head_node ;

    }else if(strcmp(file_name,"move_right_diagonal_down_kp.txt") == 0){
        temp_node = move_right_diagonal_down_head_node ;


    }else if(strcmp(file_name,"move_left_diagonal_up_kp.txt") == 0){
        temp_node = move_left_diagonal_up_head_node ;


    }else if(strcmp(file_name,"move_left_diagonal_down_kp.txt") == 0){
        temp_node = move_left_diagonal_down_head_node ;


    }



    if(temp_node == NULL){
        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "your desired linked list is empty.\a" ANSI_COLOR_RESET);
        return 0;

    }else{

        while(temp_node != NULL){

            printf("KP = %.3f\t\t",temp_node->KP);
            printf("Gyro_start = %.3f\t\t",temp_node->gyro_start);
            printf("Gyro_end = %.3f\t\t",temp_node->gyro_end);
            printf("diff = %.3f\n\n",(temp_node->gyro_end) - (temp_node->gyro_start));

            temp_node = temp_node->next;

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

