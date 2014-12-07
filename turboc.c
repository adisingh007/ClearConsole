#include "turboc.h"
#include <stdlib.h>



void clrscr() {

    char *clear;

    #ifdef _WIN64
	clear = "cls";
    #elif _WIN32
        clear = "cls";
    #elif __APPLE__
        clear = "clear";
    #elif __linux
        clear = "clear";
    #elif __unix
        clear = "clear";
    #endif	

    system(clear); 
}
