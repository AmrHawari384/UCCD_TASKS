#include <stdio.h>
#include <stdlib.h>

int main()
{int arr[10];
int sum=0;
int avg;
for(int i=0;i<=9;i++)
{
    printf("Enter number %d =",i+1);
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
    avg=sum/10;
    printf(" Sum of array elements  = %d \n",sum);
    printf(" Average of array elements  = %d ",avg);


    return 0;
}
