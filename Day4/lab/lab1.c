#include <stdio.h>
#include <stdlib.h>
int get_max(int n1,int n2);

void main()
{  int n1,n2;
    printf("Enter n1 = ");
    scanf("%d",&n1);
    printf("Enter n2 = ");
    scanf("%d",&n2);
    printf("The max is %d ",get_max(n1,n2));
}
int get_max(int n1,int n2){
int max;

    if(n1>n2)
    {
        max=n1;
    }
    else if(n2>n1)
    {
        max=n2;
    }
return max;

}
