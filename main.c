#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*************
Practice5
*************/

void main(void)
{
	int i;
	int grade[5];
	int average=0;
	int result=0;
	int *gptr;
	
	for(i=0;i<5;i++)
	{
		printf("input a grade[%i]=",i);
		scanf("%d",&grade[i]);
	}
	gptr=grade;
	
	for(i=0;i<5;i++)
		printf("grade[%d]=%d\n",i,*(gptr+i));
		
	for(i=0;i<5;i++)
	{
		result=result+*(gptr+i);
	}
	average=result/5;
	
	printf("\n");
	printf("average:%d\n",average);
}
