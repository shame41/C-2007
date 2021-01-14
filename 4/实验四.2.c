/*实验4-2程序修改替换题程序*/ 
#include<stdio.h> 
#define MAX(a,b,c)  ((m)=(c));\
	if ((a)>(b))\
	{	if((a)>(c)) (m)=(a);}\
	else\
    	if((b)>(c)) (m)=(b);
float sum(float x, float y);
int main(void)
{
	int a, b, c,m;
  	float d, e;
  	printf("Input three integers:");
  	scanf("%d %d %d",&a,&b,&c);
  	MAX(a,b,c);
  	printf("\nThe maximum of them is %d\n",m);

  	printf("Input two floating point numbers:");
	scanf("%f %f",&d,&e);
	printf("\nThe sum of them is  %f\n",sum(d,e));
	return 0;
}
	
/*int max(int x, int y, int z)					
{
	int m=z;
	if (x>y)
		if(x>z) m=x;
	else
    	if(y>z) m=y;
    return m;
}*/

float sum(float x, float y)
{
	return x+y;
}
