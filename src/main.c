#include <stdio.h> 
#include "config.h"
#include "init.h"
#include "read_exec.h"

int main ()
{
    init();
    for(;;)
    {
        read_exec();
    }
}