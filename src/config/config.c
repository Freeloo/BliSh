#include <stdio.h>
#include <stdlib.h>
#include "./config.h"

int config()
{
  config_file = fopen("blish.conf", "w+");
   if (config_file==NULL)
   {
       return 1;
   }
   else 
   {
       return 0;
   }

}

int config_load_file()
{
   
}