#include <stdio.h>
#include <stdlib.h>

int main()
{    float avg;
     int sum=0;
     int x;
    for(int i=1;i<=10;i++)
  {

     printf("Enter %d :",i) ;
     scanf("%d",&x);
       sum=sum+x;

  }
     avg=sum/10;
    printf("The sum is = %d\n",sum);
    printf("The avrege is = %f",avg);

    return 0;
}
