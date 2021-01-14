#include <stdio.h>
int main()
{
	unsigned int net,a1,a2,a3,a4;
	while(scanf("%u",&net)!=EOF)
	{
		a1 = net>>24;
		a2 = net<<8>>24;
		a3 = net<<16>>24;
		a4 = net<<24>>24;
		printf("%u.%u.%u.%u\n",a1,a2,a3,a4);
	}
}
