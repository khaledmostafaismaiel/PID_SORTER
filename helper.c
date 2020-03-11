#include "helper.h"


int get_file_name_choise(){
    char choise[MAX_SIZE] ;
    int  choise_num ;

    do{
        puts("1 to choose move_forward_kp.txt");
        puts("2 to choose move_backward_kp.txt");
        puts("3 to choose move_right_side_kp.txt");
        puts("4 to choose move_left_side_kp.txt");
        puts("5 to choose move_right_diagonal_up_kp.txt");
        puts("6 to choose move_right_diagonal_down_kp.txt");
        puts("7 to choose move_left_diagonal_up_kp.txt");
        puts("8 to choose move_left_diagonal_down_kp.txt");
        puts("9 to back\n");

        scanf("%s",choise);

        choise_num = atoi(choise);

        if((choise_num <= 0) || (choise_num > 9)){
            
            puts(ANSI_COLOR_RED Bold"\t\t\t\t\t INVALID CHOISE"ANSI_COLOR_RESET);

        }

        }while((choise_num <= 0) || (choise_num > 9));

    return choise_num ;
}



int get_process_choise(){
        

    char choise[MAX_SIZE] ;
    int  choise_num ;

    do{
        puts("1 to insert new KP");
        puts("2 to show KPs");
        puts("3 to sort KPs");
        puts("4 to EXIT\n");


        scanf("%s",choise);

        choise_num = atoi(choise);

        if((choise_num <= 0) || (choise_num > 4)){
            
            puts(ANSI_COLOR_RED Bold"\t\t\t\t\t INVALID CHOISE"ANSI_COLOR_RESET);

        }
    }while( (choise_num <= 0) || (choise_num > 4) );

    return choise_num;
}


int get_sorting_type(){
    char choise[MAX_SIZE] ;
    int  choise_num ;

    do{
        puts("1 to sort by KPs");
        puts("2 to sort by diff betwwen (gyero_end and gyro_star)");
        puts("3 to return to main menu\n");


        scanf("%s",choise);

        choise_num = atoi(choise);

        if((choise_num <= 0) || (choise_num > 3)){
            
            puts(ANSI_COLOR_RED Bold"\t\t\t\t\t INVALID CHOISE"ANSI_COLOR_RESET);

        }

    }while((choise_num <= 0) || (choise_num > 3));

    return choise_num ;
}