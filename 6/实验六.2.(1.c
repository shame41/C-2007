#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 4
/*��ָ������sָ���size���ַ���������������*/
void strsort(char **s, int size)
{
	char*temp;
	int i, j,flag;
	for(i=0; i<size-1; i++)
	{
		for (j=0; j<size-i-1; j++)
		{
			flag = strcmp(*(s+j),*(s+j+1));
			if (flag==1)
			{
				temp = *(s+j);
		 		*(s+j)= *(s+j+1);
				*(s+j+1) = temp;
			}
		}
	}
}

int main()
{
	int i;
	char *s[N]/*ָ���ַ�����ָ��*/, t[50];
	for (i=0; i<N; i++)
	{
		gets(t);
		s[i] = (char *)malloc(strlen(t)+1);
		strcpy(s[i],t);
	}
	strsort(s,N);
	for (i=0; i<N; i++)	puts(s[i]);//������Ǹ�ɶ... 
	return 0;
}
