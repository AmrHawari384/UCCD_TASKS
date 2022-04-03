#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("Enter the number to display its multiplication table =");
    scanf("%d",&n);
    for(int i=1;i<=12;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
