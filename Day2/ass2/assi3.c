#include <stdio.h>
#include <stdlib.h>

int main()
{int arr[3];
 for(int j=0;j<=2;j++)
{
    printf("Enter number %d = ",j+1);
    scanf("%d",&arr[j]);
}
      int max=arr[0];
  for(int i=0;i<=2;i++)
  {
      if( arr[i]>max)
      {
          max=arr[i];
      }
  }
  printf("The maximum number is %d",max);
    return 0;
}
