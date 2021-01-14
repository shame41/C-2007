#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long num = 0; 
	int xnum = 0;
	scanf("%d",&num);
	char**eve;
	eve = (char**)malloc(8*sizeof(char*));
	*eve = (char*)malloc(4*sizeof(char));
	int i = 31;
	for(int cnt = 0;cnt<4;cnt++)
    {
    	int j;
    	for(j = 0;j<32;j++)
    	{
    		*(*eve+j)= 0;
    	}
	}
	while (num > 0)
	{
        *(*eve+i) = num % 2;
        i = i - 1;
        num = num / 2;
    }
    for (i=0; i < 32; i++)
        printf("%d", *(*eve+i));
    printf("\n"); 
    i = 0;
    for(int cnt = 0;cnt<4;cnt++)
    {
    	printf("第%d字节，高字节：",cnt+1);
    	for(;i<cnt*8+4;i++)
    	{
    		xnum = xnum + (*(*eve+i))*(int)pow(2,8*cnt+3-i);
		}
		printf("%x\n",xnum);
		xnum = 0;
		printf("第%d字节，低字节：",cnt+1);
		for(;i<cnt*8+8;i++)
		{
			xnum = xnum + (*(*eve+i))*(int)pow(2,8*cnt+7-i);
		} 
    	printf("%x\n",xnum);
    	xnum = 0;
	}
    return 0;
    
 } 
