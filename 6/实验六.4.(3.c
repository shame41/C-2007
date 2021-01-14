#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
void space(char*string)
{
	int i = 0;
	int flag = 0;
	int j;
	while(*string==' '||*string=='\t')
	{
		j = strlen(string)-1;
		for(i=0;i<j;i++)
		{
			string[i]=string[i+1];
		}
	
		string[j] = ' ';
		j--;
	}

}
int main()
{
	int n,i;
	scanf("%d",&n);
	char *line[n];
	for(i=0;i<n;i++)
		line[i] = (char*)malloc(80*sizeof(char));
//	line = (char**)malloc(n*sizeof(char*));
	getchar();
	for(i=0;i<n;i++)
	{
		gets(line[i]);
	}
	for(i=0;i<n;i++)
	{
		space(line[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",*(line+i));
	}
	return 0;
} 
