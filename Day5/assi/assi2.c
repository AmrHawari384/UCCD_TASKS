#include <stdio.h>
#include <stdlib.h>


int main()
{
 int class1[10]={50,98,30,99,43,27,100,83,88,10};
 int pass1=0;
 int failed1=0;
 int max1=class1[0];
 int min1=class1[0];
 int avg1,sum1=0;

    for (int i=0;i<10;i++)
    {    sum1=sum1+class1[i];
        if (class1[i]>=50)
        {
           pass1+=1;
        }
        else
        {
            failed1+=1;
        }
        if (max1 <=class1[i])
            {
            max1=class1[i];
            }
        if (min1 >=class1[i])
        {
            min1=class1[i];
        }
    }
    avg1=sum1/10;
    printf("Number of passed students %d\n",pass1);
    printf("Number of failed students %d\n",failed1);
    printf("Max is %d\n",max1);
    printf("Min is %d\n",min1);
    printf("Average is %d\n",avg1);
    int class2[10]={55,96,99,85,34,100,10,66,34,99};
 int pass2=0;
 int failed2=0;
 int max2=class2[0];
 int min2=class2[0];
 int avg2,sum2=0;

    for (int i=0;i<10;i++)
    {    sum2=sum2+class2[i];
        if (class2[i]>=50)
        {
           pass2+=1;
        }
        else
        {
            failed2+=1;
        }
        if (max2 <=class2[i])
            {
            max2=class2[i];
            }
        if (min2 >=class2[i])
        {
            min2=class2[i];
        }
    }
    avg2=sum2/10;
    printf("Number of passed students %d\n",pass2);
    printf("Number of failed students %d\n",failed2);
    printf("Max is %d\n",max2);
    printf("Min is %d\n",min2);
    printf("Average is %d\n",avg2);
    int class3[10]={97,67,99,14,45,14,22,83,77,11};
 int pass3=0;
 int failed3=0;
 int max3=class3[0];
 int min3=class3[0];
 int avg3,sum3=0;

    for (int i=0;i<10;i++)
    {    sum3=sum3+class3[i];
        if (class3[i]>=50)
        {
           pass3+=1;
        }
        else
        {
            failed3+=1;
        }
        if (max3 <=class3[i])
            {
            max3=class3[i];
            }
        if (min3 >=class3[i])
        {
            min3=class3[i];
        }
    }
    avg3=sum3/10;
    printf("Number of passed students %d\n",pass3);
    printf("Number of failed students %d\n",failed3);
    printf("Max is %d\n",max3);
    printf("Min is %d\n",min3);
    printf("Average is %d\n",avg3);

    return 0;

}
