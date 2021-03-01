#include <stdlib.h>
#include <stdio.h>
#include "interpreter.h"

char *read_from_stdin()
{
    char *command;
    fgets(command, 50, stdin);
    return command;
}

