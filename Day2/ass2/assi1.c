#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[10];
   int s;
   int flag=0;
   for(int i=1;i<=10;i++)
   {
       printf("Enter number %d = ",i);
       scanf("%d",&arr[i]);
   }
   printf("Search for: ");
   scanf("%d",&s);
   for(int j=1;j<=10;j++)
   {
       if(s==arr[j])
       {   printf("value is exist at number %d",j);
           flag=1;
       }
   }
   if(flag!=1)
   {
       printf("value no exist");
   }

    return 0;
}
