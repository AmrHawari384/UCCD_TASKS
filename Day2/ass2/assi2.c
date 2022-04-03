#include <stdio.h>
#include <stdlib.h>

int main()
{ int id,pass;
     printf("Enter your ID :");
     scanf("%d",&id);
     switch(id)
     {
      case 5858:
        {
            printf("Enter your password :");
            scanf("%d",&pass);
            switch(pass)
            {
              case 302010:
                  {
                      printf("WELCOME,Amr Hani ");
                      break;
                  }
                     default:
                     {
                         printf("inccorect password ");
                     }
            }
            break;

       }
        default:
        {
                 printf("inccorect ID");

        }


    }

    return 0;
}
