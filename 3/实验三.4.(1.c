#include <stdio.h>
#include <math.h>
int Xprime (int n);
int prime (int n,int *p);
int main()
{
	int n,X,num;
	int *p;
	p = &X;

	while(scanf("%d",&n)!=EOF)
	{	num = prime(n,p);
		printf("%d = %d + %d\n",n,num,X);
	}
	return 0;
}

int prime(int n,int *p)
{
	int prime1,prime2;
	for(prime1=2;prime1<n;prime1++)
	{
//		prime1 = Xprime(prime1);
		if(Xprime(prime1) != 0)
		{
			prime1 = Xprime(prime1);
			prime2 = Xprime(n-prime1);
			if(prime2 !=0)
			{
				*p = prime2;
				break;
			}
		}
			
	}
return prime1;
}

int Xprime(int prime)
{	int i;
	int p = sqrt(prime);
	for(i=2;i<=p;i++)
	{
		if(prime%i==0)
		{
			prime = 0;
			break;
		}
			
	}
	return prime;
} 
