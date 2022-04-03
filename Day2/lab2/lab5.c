#include <stdio.h>
#include <stdlib.h>

int main()
{
  int id;
  printf("please,Enter your ID : ");
  scanf("%d",&id);
  switch (id)
   {
        case 1234:
    {
        printf("Ahmed");
        break;
    }
        case 5678:
    {
        printf("Youssef");
        break;
    }
        case 1145:
    {
        printf("Mina");
        break;
    }
        default:
            {
                printf("Wrong ID");
            }

  }
    return 0;
}
