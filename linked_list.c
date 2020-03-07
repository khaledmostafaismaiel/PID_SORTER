#include "linked_list.h"



int ask_for_data(node * my_node){

    char answer[MAX_SIZE];

    puts("Please enter Kp");
    scanf("%s",answer);
    my_node->KP = atoll(answer);

    puts("Please enter gyro_start");
    scanf("%s",answer);
    my_node->gyro_start = atoll(answer);

    puts("Please enter gyro_end");
    scanf("%s",answer);
    my_node->gyro_end = atoll(answer);

    return 1 ;
}




int insertToLinkedList(char *file_name)
{
 
    new_node = (node *)malloc(sizeof(node));

    if (new_node == NULL)
    {
        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "HEAP IS UNDERFLOW CAN'T CREAT COMMAND LINKED LIST.\a" ANSI_COLOR_RESET);
        exit(0);
    }

    
    if(strcmp(file_name,"move_forward_kp.txt") == 0){

        if (move_forward_head_node == NULL)
        {

            move_forward_head_node = new_node;
            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_forward_current_node = new_node;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);
            }

        }else{

            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_forward_current_node->next = new_node;
                move_forward_current_node = new_node ;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);

            }


        }

    }else if(strcmp(file_name,"move_backward_kp.txt") == 0){

        if (move_backward_head_node == NULL)
        {

            move_backward_head_node = new_node;
            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_backward_current_node = new_node;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);
            }

        }else{

            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_backward_current_node->next = new_node;
                move_backward_current_node = new_node ;

            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);

            }


        }

    }else if(strcmp(file_name,"move_right_side_kp.txt") == 0){

        if (move_right_side_head_node == NULL)
        {

            move_right_side_head_node = new_node;
            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_right_side_current_node = new_node;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);
            }

        }else{

            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_right_side_current_node->next = new_node;
                move_right_side_current_node = new_node ;
                
                }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);

            }


        }
        
    }else if(strcmp(file_name,"move_left_side_kp.txt") == 0){

        if (move_left_side_head_node == NULL)
        {

            move_left_side_head_node = new_node;
            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_left_side_current_node = new_node;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);
            }

        }else{

            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_left_side_current_node->next = new_node;
                move_left_side_current_node = new_node ;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);

            }


        }
        
    }else if(strcmp(file_name,"move_right_diagonal_up_kp.txt") == 0){

        if (move_right_diagonal_up_head_node == NULL)
        {

            move_right_diagonal_up_head_node = new_node;
            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_right_diagonal_up_current_node = new_node;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);
            }

        }else{

            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_right_diagonal_up_current_node->next = new_node;
                move_right_diagonal_up_current_node = new_node ;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);

            }


        }

    }else if(strcmp(file_name,"move_right_diagonal_down_kp.txt") == 0){

        if (move_right_diagonal_down_head_node == NULL)
        {

            move_right_diagonal_down_head_node = new_node;
            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_right_diagonal_down_current_node = new_node;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);
            }

        }else{

            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_right_diagonal_down_current_node->next = new_node;
                move_right_diagonal_down_current_node = new_node ;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);

            }


        }


    }else if(strcmp(file_name,"move_left_diagonal_up_kp.txt") == 0){

        if (move_left_diagonal_up_head_node == NULL)
        {

            move_left_diagonal_up_head_node = new_node;
            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_left_diagonal_up_current_node = new_node;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);
            }

        }else{

            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_left_diagonal_up_current_node->next = new_node;
                move_left_diagonal_up_current_node = new_node ;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);

            }


        }

    }else if(strcmp(file_name,"move_left_diagonal_down_kp.txt") == 0){

        if (move_left_diagonal_down_head_node == NULL)
        {

            move_left_diagonal_down_head_node = new_node;
            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_left_diagonal_down_current_node = new_node;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);
            }

        }else{

            if(ask_for_data(new_node)){
                new_node->next = NULL;
                move_left_diagonal_down_current_node->next = new_node;
                move_left_diagonal_down_current_node = new_node ;
            }else{
                puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "cant ask_for_data from user.\a" ANSI_COLOR_RESET);

            }


        }

    }else{

    }

    
    if(write_data_in_file(new_node,file_name)){
        return 1;
    }else{
        // delete the last node in the linked list
        return 0 ;
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
        printf("diff = %f\n\n",(my_node->gyro_end) - (my_node->gyro_end));

        my_node = my_node->next;
    }
    
        return 1;
    }


}


int bubble_sort_linked_list(node *my_node){

    if(my_node == NULL){
        puts(ANSI_COLOR_RED Bold "ERORR:" ANSI_COLOR_RESET ANSI_COLOR_Bright_Yellow "your desired linked list is empty.\a" ANSI_COLOR_RESET);
        return 0;

    }else{


    }
    



    return 1 ;
}