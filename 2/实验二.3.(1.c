#include <stdio.h>
int main()
{
	int x;
	float tax;
	printf("�����빤�ʣ� ");
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
	printf("������ɵ�˰Ϊ%.3fԪ",tax);
	return 0;
 } 
