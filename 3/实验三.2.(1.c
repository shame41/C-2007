#include <stdio.h>
long long int sum_fac(int n); 
int main(void)
{
    int k;
    for(k=1;k<=20;k++)
         printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));
    return 0;
}

long long int sum_fac(int n)
{	
	int i = 1;
	long long int fac = 1,s = 0;
	long long int chaos(long long int s)
	{
	fac = fac * i;
	s = s+fac;
	i++;
	if(i<=n)
		s = chaos(s);
	return s;
	}
	s = chaos(s);
	return s;
}
