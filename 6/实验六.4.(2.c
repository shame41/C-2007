#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y;
	printf("��������Ҫ��������������\n");
	scanf("%d%d",&y,&x);;
	int**rac;
	int i; 
	rac = (int**)malloc(y*sizeof(int*));
	*rac = (int*)malloc(x*sizeof(int));
	printf("��������������������\n");
	for(i=0;i<x*y;i++)
	{
		scanf("%d",*rac+i);
	}
	for(i=x-1;i>=0;i--)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d ",*(*rac+i+j*x));
		}
		printf("\n");
	}
	return 0;
}
