//����һ�����������������ڴ��д������ʽ��� 
#include <stdio.h>
#include <malloc.h>
void*malloc(size_t size);
int main()
{
	int *p = NULL;
	int num,i,a,cnt;
	scanf("%d",&num);
	p = (int*)malloc(sizeof(int)*num);//��̬�ڴ���� 
	if(num == 0)
		printf("%d",0); 
	else
	{	for(i=0,a=num,cnt=0;a>0;i++)//����������������ֵ���� 
		{
		p[i]=a%2;
		a = a>>1;
		cnt++;//������ 
		}
		for(i=i-1;i>=0;i--)
			printf("%d",p[i]);//��� 
		free(p);//�ͷ��ڴ� 
	}
return 0;
}
