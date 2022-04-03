#include <stdio.h>
#include <stdlib.h>

int main (){

	int grade;
	printf("Enter ypur grade = ");
	scanf("%d",&grade);
	if(grade>=0 && grade <50)
	{
		printf("Failed");
	}
	else if(grade>=50 && grade <65)

		{
			printf("normal");
		}
		else if(grade>=65 && grade <75)

		{
			printf("good");
		}
		else if(grade>=75 && grade <85)

		{
			printf("very good");
		}
		else if(grade>85)

		{
			printf("exelent");
		}




	return 0;
}
