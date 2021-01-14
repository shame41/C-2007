#include <stdio.h> 
int main()
{
	unsigned short x,n,m,xn;
	scanf("%hx%hd%hd",&x,&m,&n);
	if((m<=15&&m>=0)&&(n>=1&&n<=16 - m))
	{
		xn=x>>m;
		xn=xn<<(16-n);
		x=xn|x;
		x&=~(1<<(m+n-1));
		printf("%x",x);	
	}
	else
	{
		printf("ÊäÈë´íÎó"); 
	}
 return 0; 
}
