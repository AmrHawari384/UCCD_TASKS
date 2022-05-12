#include <stdio.h>
#include <stdlib.h>

int main()
{int arr[10];
int search;
int flag=0;
int sum=0;
for(int i=0;i<=9;i++)
{
    printf("Enter number %d = ",i+1);
    scanf("%d",&arr[i]);
}
 printf("Enter value to search for = ");
    scanf("%d",&search);
    for(int i=0;i<=9;i++)
     {
         if(arr[i]==search)
            {sum=sum+1;
             flag=1;
            }
     }
    if(flag==1)
    {
    printf("Value exist %d times",sum);
    }
    else
    {
    printf("Value not exist");
    }
    return 0;
}
