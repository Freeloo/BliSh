#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "interpreter.h"


void exec(char command[50])
{
    if(command=="exit")
    {
        exit(0);
    }
    else 
    {
       system(command);
    }
    for(int i; i<strlen(command);i++)
    {
        command[i]=NULL;
    }
}
