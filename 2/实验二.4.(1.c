#include <stdio.h>
int main()
{
	char word[10];
	int i;
	while((scanf("%s",word))!=EOF)
	{
		if(word[0]=='0')
		{
			if(word[1]=='x')
			{
				for(i=2;word[i]=='L'||word[i]==0;i++)
				{
					if(word[i]>=65&&word[i]<=70||word[i]>=97&&word[i]<=102||word[i]>=48&&word[i]<=57)
						printf("�Ϸ�\n");
					else
						printf("���Ϸ�\n");
				}
			}
			else
			{
				for(i=1;word[i]=='L'||word[i]==0;i++)
				{
					if(word[i]>=48&&word[i]<=55)
						printf("�Ϸ�\n");
					else
						printf("���Ϸ�\n");	
				}
			}
		}
		else
		{
			for(i=1;word[i]=='L'||word[i]==0;i++)
			{
				if(word[i]>=48&&word[i]<=57)
					printf("�Ϸ�\n");
				else
					printf("���Ϸ�\n");	
			}
		}
		
	} 
return 0;
} 
