#include <stdio.h>
#include <math.h>
#define TEMP(a,b,c) (((a)+(b)+(c))/2)
#define Square(a,b,c,s) (sqrt((s)*((s)-(a))*((s)-(b))*((s)-(c)))) 
int main()
{
	int a,b,c,s,area;
	scanf("%d%d%d",&a,&b,&c);
	s = TEMP(a,b,c);
	area = Square(a,b,c,s);
	printf("%d",area);
	return 0;
} 
