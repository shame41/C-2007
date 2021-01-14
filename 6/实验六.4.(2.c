#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y;
	printf("请输入想要的行数和列数：\n");
	scanf("%d%d",&y,&x);;
	int**rac;
	int i; 
	rac = (int**)malloc(y*sizeof(int*));
	*rac = (int*)malloc(x*sizeof(int));
	printf("按行优先依次输入数字\n");
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
