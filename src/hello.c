#include <stdio.h>
#include "../include/hello.h"

void
hello (char *name)
{
  printf("Hello, %s!\n", name);
}

void 
helloworld()
{
  hello("world");
}

