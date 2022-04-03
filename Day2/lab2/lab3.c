#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("Enter any number = ");
    scanf("%d",&n);
  if(n%2==0)
  {
      printf("This number (%d) is EVEN",n);
  }
  else
  {
   printf("This number (%d) is ODD",n);
  }
    return 0;
}
