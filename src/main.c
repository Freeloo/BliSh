#include <stdio.h> 
#include <stdlib.h>
#include "config/config.h"
#include "init/init.h"
#include "interpreter/interpreter.h"

int main ()
{
    init();
    for(;;)
        exec(read_from_stdin());
    fclose(config_file);
}