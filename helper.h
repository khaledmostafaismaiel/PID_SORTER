#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_White "\x1b[37m"
#define ANSI_COLOR_Bright_Black "\x1b[90m"
#define ANSI_COLOR_Bright_Red "\x1b[91m"
#define ANSI_COLOR_Bright_Green "\x1b[92m"
#define ANSI_COLOR_Bright_Yellow "\x1b[93m"
#define ANSI_COLOR_Bright_Blue "\x1b[94m"
#define ANSI_COLOR_Bright_Magenta "\x1b[95m"
#define ANSI_COLOR_Bright_Cyan "\x1b[96m"
#define ANSI_COLOR_Bright_Bright_White "\x1b[97m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define Bold "\x1b[1m"


#define MAX_SIZE 255
#define SORT_BY_KPS 1
#define SORT_BY_DIFF 2

#define MOVE_FORWARD_KP_TXT 1
#define MOVE_BACKWARD_KP_TXT 2
#define MOVE_RIGHT_SIDE_KP_TXT 3
#define MOVE_LEFT_SIDE_KP_TXT 4
#define MOVE_RIGHT_DIAGONAL_UP_KP_TXT 5
#define MOVE_RIGHT_DIAGONAL_DOWN_KP_TXT 6
#define MOVE_LEFT_DIAGONAL_UP_KP_TXT 7
#define MOVE_LEFT_DIAGONAL_DOWN_KP_TXT 8

#define CHOOSE_TO_INSERT_NEW_KP 1
#define CHOOSE_TO_SHOW_KPS 2
#define CHOOSE_TO_SORT 3
#define CHOOSE_TO_EXIT 4

int get_file_name_choise(void);

int get_process_choise(void);

int get_sorting_type(void);

int is_number(char *string);

int string_length(char *string);