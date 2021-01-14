#include <stdio.h>
int sumzuhe(int N, int K);
int main()
{
	printf("你要几层的杨辉三角？:");
	int n,i,x,k,num,cnt;
	scanf ("%d",&n);
	cnt = n;
	for(x=0;x<=n;x++)
	{	
		i = cnt;
		while(i>=0)
		{
			printf("  ");
			i--;
		}
		for(k=0;k<=x;k++)
		{	  
		num = sumzuhe(x,k);
		if(num<=9)
			printf("%d   ",num);
		if(num<=99&&num>=10)
			printf("%d  ",num);
		if(num<=999&&num>=100)
			printf("%d ", num);
		if(num<=9999&&num>=1000)
			printf("%d",num);
		}
			cnt--;
			printf("\n");
	}	
	return 0;
} 

int sumzuhe(int N, int K)
{
	if (K==0)
		return 1;
	if (N==K)
		return 1;
	return sumzuhe(N-1,K-1) + sumzuhe(N-1,K);
}
