#include <stdio.h>
#include <stdlib.h>
 int  save(int*ptr1,int*ptr2);

int main()
{ int x,y;
printf("Enter x =");
scanf("%d",&x);
printf("Enter y =");
scanf("%d",&y);
  printf("sum=%d",save(&x,&y));
    return 0;
}
    int save(int *ptr1,int *ptr2){
    return *ptr1+*ptr2;

}
