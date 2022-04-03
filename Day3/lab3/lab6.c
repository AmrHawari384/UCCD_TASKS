#include <stdio.h>
#include <stdlib.h>

int main()
{  int n;
   int i=1;
   int fac=1;
    printf("Enter the number you to git its factorial = ");
    scanf("%d",&n);
    while(i<=n)
    {
        fac=fac*i;

        i++;
    }
    printf("The factorial of 5! = %d",fac);
    return 0;
}
