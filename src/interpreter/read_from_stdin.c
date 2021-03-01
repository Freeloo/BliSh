#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "interpreter.h"

char *read_from_stdin()
{
    putchar('>');
    fgets(command, 150, stdin);
    command[strlen(command)-1]='\0';
    return command;
}

