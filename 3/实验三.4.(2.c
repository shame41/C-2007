#include <stdio.h>
int perfect(int pnum,int*a);
int main()
{
	int a[20000];
	int pnum,i;
	for(pnum = 5;pnum<=10000;pnum++)
	{
		pnum = 28; 
		for(i=0,a[0]=0;a[i]!=-1;i++)
			a[i]=0;
		if(perfect(pnum,a) != 0)
		{
			printf("%d=1",pnum);
			i = 0;
			for(i=0;a[i]!=0;i++)
			{
				if(a[i]!=0)
					printf("+%d",a[i]);
			}
			printf("\n");
		}
	}
}

int perfect(int pnum,int*a)
{
	int i,k,x,sum =0;

	for(k=2,i=0;k<pnum;k++)
	{
		if(pnum%k == 0)
		{
			a[i] = k;
			sum = sum+a[i];
			i++;
		}
	}
	if(sum+1 == pnum)
	{
		x = pnum;
		
	}
	else
		x = 0;
return x;
}
