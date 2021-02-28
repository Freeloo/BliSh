#include <stdlib.h>
#include <stdio.h>
#include "read_exec.h"

void read_exec()
{
    exec(read());
}

char *read()
{
    char *command;
    fgets(command, 50, stdin);
    return command;
}

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
