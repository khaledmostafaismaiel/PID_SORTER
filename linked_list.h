#include <stdio.h>
#include <stdlib.h>
#include "helper.h"


typedef struct node
{
    float KP ;

    float gyro_start;

    float gyro_end ;

    struct node *next;

} node;


node *new_node = NULL;

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




int ask_for_data(node * my_node);


int insertToLinkedList(char *file_name);

int show_linked_list(node * my_node);

int bubble_sort_linked_list(node *my_node,int sorting_type);