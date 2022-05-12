#include <stdio.h>
#include <stdlib.h>

int main(){
     int arr[10];
     for(int j=0;j<=9;j++)
     {
         printf("Enter number %d = ",j+1);
         scanf("%d",&arr[j]);
     }
     int swaps=1;
     while(swaps>0){
        swaps=0;
        for (int i=0;i<=9;i++){
                if(arr[i]>arr[i+1])
                  {
                    int z=arr[i];
                     arr[i]=arr[i+1];
                     arr[i+1]=z;
                       swaps++;
                  }

              }
  }
    printf("Values after sorting are :\n");
  for (int i=0;i<=9;i++){
     printf("%d\n",arr[i]);
     }

    return 0;
}
