#include <stdio.h>
#include <stdlib.h>

int main()
{
int z;
printf("Enter the result of (3*4) = ");
scanf("%d",&z);
while(z!=12)
{
    printf("Try again \n ");
    printf("Enter the result of (3*4) = ");
    scanf("%d",&z);

}
printf("Thanks");
    return 0;
}
