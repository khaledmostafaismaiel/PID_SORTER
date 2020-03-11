#include <stdio.h>
#include <stdlib.h>
#include "helper.h"
#include "files.h"

typedef struct node
{
    float KP ;

    float gyro_start;

    float gyro_end ;

    struct node *next;

} node;


node *temp_node = NULL;

node *move_forward_head_node = NULL;
node *move_forward_current_node = NULL;

node *move_backward_head_node = NULL;
node *move_backward_current_node = NULL;

node *move_right_side_head_node = NULL;
node *move_right_side_current_node = NULL;

node *move_left_side_head_node = NULL;
node *move_left_side_current_node = NULL;

node *move_right_diagonal_up_head_node = NULL;
node *move_right_diagonal_up_current_node = NULL;

node *move_right_diagonal_down_head_node = NULL;
node *move_right_diagonal_down_current_node = NULL;

node *move_left_diagonal_up_head_node = NULL;
node *move_left_diagonal_up_current_node = NULL;

node *move_left_diagonal_down_head_node = NULL;
node *move_left_diagonal_down_current_node = NULL;




int get_data_from_user(char *file_name);

int insertToLinkedList(char *file_name , float kp,float gyro_start ,float gyro_end);

int show_linked_list(char *file_name);

int bubble_sort_linked_list(char*file_name,int sorting_type);

void swap(node *my_node,node *my_node_neigheour);




