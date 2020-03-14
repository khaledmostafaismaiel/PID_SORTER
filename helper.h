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

int get_file_name_choise(void);

int get_process_choise(void);

int get_sorting_type(void);

int is_number(char *string);
