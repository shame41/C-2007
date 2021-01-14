//输入一个整数，将它以在内存中储存的形式输出 
#include <stdio.h>
#include <malloc.h>
void*malloc(size_t size);
int main()
{
	int *p = NULL;
	int num,i,a,cnt;
	scanf("%d",&num);
	p = (int*)malloc(sizeof(int)*num);//动态内存分配 
	if(num == 0)
		printf("%d",0); 
	else
	{	for(i=0,a=num,cnt=0;a>0;i++)//将二进制数遍历赋值数组 
		{
		p[i]=a%2;
		a = a>>1;
		cnt++;//计数器 
		}
		for(i=i-1;i>=0;i--)
			printf("%d",p[i]);//输出 
		free(p);//释放内存 
	}
return 0;
}
