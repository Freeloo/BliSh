#include <stdlib.h>
#include <stdio.h>
#include "interpreter.h"


void exec(char *command)
{
    if(command=="exit")
    {
        exit(0);
    }
    else 
    {
        system(command);
    }
}
