#include <stdio.h>
int main( )
{ 
	int i, x, k, flag = 0;
	printf("�������жϺ��������������1����������Ctrl+Z����\n");
	while (scanf("%d", &x) !=EOF) 
	{	
		i = 2;
		k=x>>1;
		do
		{
				if (x%i==0)
			{
				flag = 1;	
			} 
			i++;
		}
		while(i<=k);
			
	if(flag==1) printf("%d�Ǻ���\n", x);
	else printf("%d���Ǻ���\n", x);
	flag = 0;
	}
return 0;
}
