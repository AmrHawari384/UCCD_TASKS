#include <stdio.h>
#include <stdlib.h>

int main()
{int arr[10];
 for(int i=0;i<=9;i++)
  {
      printf("Please Enter number %d =  ",i+1);
      scanf("%d",&arr[i]);
  }
  printf("The value in reversed orderd is :\n");
 for(int j=9;j>=0;j--)
 {
    printf(" %d \n",arr[j]);
 }
    return 0;
}
