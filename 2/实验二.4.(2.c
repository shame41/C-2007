#include <stdio.h>
int main()
{
	int a[10];
	int num1,num2,flag,p,y,i,t,k;
	printf("������һ�����ڵ���2С�ڵ���79������\n");
	scanf("%d",&k);
	for(num1=10000;num1<=99999;num1++)//Ѱ�ҷ��� 
	{
		for(num2=1000;num2<=50000;num2++)//Ѱ�ҷ�ĸ 
		{ 
			if(num1==num2*k)//�ж����÷��ӳ��Է�ĸ�Ƿ����k 
			{
				flag = 1;//�����õ����жϱ�ʶ�� 
				t = 10000;
				for(i=0;i<=4;i++)//�����Ӹ�����ֿ� 
				{
					a[i]=num1/t%10;
					t=t/10;
				}
				t = 10000;
				for(i=5;i<=9;i++)//����ĸ������ֿ� 
				{
					a[i]=num2/t%10;
					t=t/10;
				}
				for(i=0;i<9;i++)//��һ��һ���ж������и�Ԫ���Ƿ������ȵ��� 
				{
					for(y=i+1;y<=9;y++)
					{
						if(a[i]==a[y])
						{
							flag=0;//�������ȵ����ʶ���ı䣬����ѭ����
							break; 
						}
					}
					if(flag == 0)
					break; 
				}
				if(flag == 1)
				{
					printf("%d �� %d = %d\n",num1,num2,k);
					break;
				}
			}
		}
	}
	return 0;
}
