#include <stdio.h>
#include <math.h>
int judge(int k); 
int main()
{
	int k,flag;
	printf("请输入任一整数,或输入boom结束程序"); 
	while(scanf("%d",&k)!=0)
	{
		flag = judge(k)	;
	}
return 0;
}
int judge(int k)
{	
	int num,num0,t0,t1,flag,i,sum;
	long long t;
	num0 = pow(10,k-1);
	int a[256];
	for(num=num0;num<10*num0;num++)
	{	
		t = num;
		t0 = num0;
		for(a[0]=0,i=0;i<=k;i++)
		{
			a[i]=(t/t0)%10;
			t = t *10;
			if(t==num*t0*10)
				break;
		}
		for(sum=0,i=0;i<k;i++)
		{
			sum=sum+pow(a[i],k);
			if((sum == num) &&(i==k-1))
			{
				printf("%d\n",sum);	
				flag =1;
				break;
			}
		}
		i=0;
	}
	return flag;
}
