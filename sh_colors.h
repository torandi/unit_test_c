//SOURCE: http://www.craig-russell.co.uk/bash-console-colours-for-c/

//// Foreground Colours ////

#define SH_FG_BLACK "\033[0;30m"
#define SH_FG_BLUE         "\033[0;34m"
#define SH_FG_GREEN         "\033[0;32m"
#define SH_FG_CYAN         "\033[0;36m"
#define SH_FG_RED         "\033[0;31m"
#define SH_FG_PURPLE         "\033[0;35m"
#define SH_FG_YELLOW         "\033[0;33m"
#define SH_FG_LIGHT_GREY     "\033[0;37m"
#define SH_FG_DARK_GREY     "\033[1;30m"
#define SH_FG_LIGHT_BLUE     "\033[1;34m"
#define SH_FG_LIGHT_GREEN     "\033[1;32m"
#define SH_FG_LIGHT_CYAN     "\033[1;36m"
#define SH_FG_LIGHT_RED     "\033[1;31m"
#define SH_FG_LIGHT_PURPLE    "\033[1;35m"
#define SH_FG_LIGHT_YELLOW     "\033[1;33m"
#define SH_FG_WHITE         "\033[1;37m"

//// Background Colours ////

#define SH_BG_BLACK         "\033[0;40m"
#define SH_BG_BLUE         "\033[0;44m"
#define SH_BG_GREEN         "\033[0;42m"
#define SH_BG_CYAN         "\033[0;46m"
#define SH_BG_RED         "\033[0;41m"
#define SH_BG_PURPLE         "\033[0;45m"
#define SH_BG_YELLOW         "\033[0;43m"
#define SH_BG_LIGHT_GREY     "\033[0;47m"
#define SH_BG_DARK_GREY     "\033[1;40m"
#define SH_BG_LIGHT_BLUE     "\033[1;44m"
#define SH_BG_LIGHT_GREEN     "\033[1;42m"
#define SH_BG_LIGHT_CYAN     "\033[1;46m"
#define SH_BG_LIGHT_RED     "\033[1;41m"
#define SH_BG_LIGHT_PURPLE    "\033[1;45m"
#define SH_BG_LIGHT_YELLOW     "\033[1;43m"
#define SH_BG_WHITE         "\033[1;47m"

//// Others ////
#define SH_DEFAULT         "\033[0m"
#define SH_UNDERLINE         "\033[4m"
#define SH_BLINK         "\033[5m"
#define SH_INVERSE         "\033[7m"
#define SH_CONCEALED         "\033[8m"

//Methods for setting:
void color(const char * color);
void reset_color();
