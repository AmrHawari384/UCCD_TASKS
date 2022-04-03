#include <stdio.h>
#include <stdlib.h>

int main()
{  int id,pass;
    printf("Please,Enter your id : ");
    scanf("%d",&id);
    switch(id)
    {   case 1234:

        {   int i=1;
             int flag=0;
              printf("Please,Enter your password : ");
               scanf("%d",&pass);
         if(pass==7788)
         {
            printf("WELCOME,AHMED");
            flag=1;
            break;
         }
         else if(pass!=7788)
           {  while(i<=2)
             {  printf("Try again!!\n ");
                printf("Please,Enter your password : ");
               scanf("%d",&pass);
               if(pass==7788)
               {
                printf("WELCOME,AHMED");
                flag=1;
                break;
               }
                 flag=0;
                i++;
             }
           }
          if(flag==0)
               {
                printf("No more Tries");
                 break;
               }
           break;

         }


    case 5678:
        {int i=1;
             int flag=0;
              printf("Please,Enter your password : ");
               scanf("%d",&pass);
         if(pass==5566)
         {
            printf("WELCOME,AMR");
            flag=1;
            break;
         }
         else if(pass!=5566)
           {  while(i<=2)
             {  printf("Try again!!\n ");
                printf("Please,Enter your password : ");
               scanf("%d",&pass);
               if(pass==5566)
               {
                printf("WELCOME,AMR");
                flag=1;
                break;
               }
                 flag=0;
                i++;
             }
           }
          if(flag==0)
               {
                printf("No more Tries");
                 break;
               }
           break;
        }
    case 9870:
        {   int i=1;
             int flag=0;
              printf("Please,Enter your password : ");
               scanf("%d",&pass);
         if(pass==1122)
         {
            printf("WELCOME,WAEL");
            flag=1;
            break;
         }
         else if(pass!=1122)
           {  while(i<=2)
             {  printf("Try again!!\n ");
                printf("Please,Enter your password : ");
               scanf("%d",&pass);
               if(pass==1122)
               {
                printf("WELCOME,WAEL");
                flag=1;
                break;
               }
                 flag=0;
                i++;
             }
           }
          if(flag==0)
               {
                printf("No more Tries");
                 break;
               }
           break;

        }
    default:
        {
               printf("You are not registered");

        }


    }
    return 0;
}
