
#include <stdio.h>
long long int sum_fac(int n); 
int main(void)
{
    int k=5;
    for(k=1;k<=20;k++)
         printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));
    return 0;
}
long long int sum_fac(int n)
{
    long long int s=0;
    long long i,fac,cnt;
    for(cnt=1;cnt<=n;cnt++)
    {
   		for(i=1,fac=1;i<=cnt;i++)
        fac*=i;
        s = s+fac;
	}

    return s;
}
