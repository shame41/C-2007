#include <stdio.h>
int main()
{
	int x;
	float tax;
	printf("请输入工资： ");
	scanf("%d",&x);
	switch(x/1000)
	{
		case 0: tax = 0;break;
		case 1: tax = (x-1000)*0.05;break;
		case 2: tax = (x-2000)*0.1+1000*0.05;break;
		case 3: tax = (x-3000)*0.15+1000*0.1+1000*0.05;break;
		case 4: tax = (x-4000)*0.2+1000*0.15+1000*0.1+1000*0.05;break;
		default: tax = (x-5000)*0.25+1000*0.2+1000*0.15+1000*0.1+1000*0.05;break;
	}
	printf("所需缴纳的税为%.3f元",tax);
	return 0;
 } 
