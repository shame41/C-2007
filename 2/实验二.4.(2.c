#include <stdio.h>
int main()
{
	int a[10];
	int num1,num2,flag,p,y,i,t,k;
	printf("请输入一个大于等于2小于等于79的整数\n");
	scanf("%d",&k);
	for(num1=10000;num1<=99999;num1++)//寻找分子 
	{
		for(num2=1000;num2<=50000;num2++)//寻找分母 
		{ 
			if(num1==num2*k)//判断所得分子除以分母是否等于k 
			{
				flag = 1;//后面用到的判断标识符 
				t = 10000;
				for(i=0;i<=4;i++)//将分子各个项分开 
				{
					a[i]=num1/t%10;
					t=t/10;
				}
				t = 10000;
				for(i=5;i<=9;i++)//将分母各个项分开 
				{
					a[i]=num2/t%10;
					t=t/10;
				}
				for(i=0;i<9;i++)//定一移一，判断数组中各元素是否存在相等的项 
				{
					for(y=i+1;y<=9;y++)
					{
						if(a[i]==a[y])
						{
							flag=0;//如果有相等的项，标识符改变，跳出循环，
							break; 
						}
					}
					if(flag == 0)
					break; 
				}
				if(flag == 1)
				{
					printf("%d ÷ %d = %d\n",num1,num2,k);
					break;
				}
			}
		}
	}
	return 0;
}
