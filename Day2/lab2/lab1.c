#include <stdio.h>
#include <stdlib.h>

int main()
{
   float wh,salary;
   printf("Enter your working hours = ");
   scanf("%f",&wh);
   salary=wh*50;
   if(wh<40)
   {
       salary=salary-(.1*salary);
   }
   printf("Your salary is %f",salary);

    return 0;
}
