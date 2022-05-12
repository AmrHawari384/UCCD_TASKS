#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=10;
   printf("x before change %d\n",x);
    int *ptr=&x;
   *ptr=20;
   printf("x after change  %d",x);
    return 0;
}
