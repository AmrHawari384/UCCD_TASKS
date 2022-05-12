#include <stdio.h>
#include <stdlib.h>

int main()
{int arr[10];
for(int i=0;i<=9;i++)
{
    printf("Enter number %d = ",i+1);
    scanf("%d",&arr[i]);
}
int max=arr[0];
int min=arr[0];
for(int i=0;i<=9;i++)
{
    if(max<=arr[i])
    {
        max=arr[i];
    }
    if(min>=arr[i])
    {
        min=arr[i];
    }
}
    printf("The Maximum is %d \n",max);
    printf("The Minimum is %d ",min);



    return 0;
}
