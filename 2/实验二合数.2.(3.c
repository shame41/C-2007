#include <stdio.h>
int composite(int x);
int main()
{
	int i,k,x,a,b,c;
	for(x=100;x<=999;x++)
	{	
		a=composite(x);
		b=composite(x/10);
		c=composite(x/100);
		if(a==1&&b==1&&c==1)
		{
			printf("%d ",x);	
		} 
	}
	return 0;
}
int composite(int x)
{
	int i,k;
	int flag = 0;
	for(i=2,k=x>>1;i<=k;i++)
		{	
			if (x%i==0)
			{
				flag = 1;
				break;
			} 	
			flag = 0;
		}
	return flag;
}	
