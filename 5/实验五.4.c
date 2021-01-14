#include <stdio.h>
#include <string.h>
char* strnins(char*s,char*t,int n);//使用前请调用库 #include <string.h>
int main()
{
	int n,i;
	char first[50],last[50];
	scanf("%s%s%d",first,last,&n);
	for(i=0;i<strlen(strnins(first,last,n));i++)
	{
		printf("%c",strnins(first,last,n)[i]);
	}
	return 0;
}
char* strnins(char*s,char*t,int n)//使用前请调用库 #include <string.h>
{
	char *fin;
	char s1[n];
	char s2[strlen(s)-n];
	int i;
	for(i=0;i<n;i++)
		s1[i]=s[i];
	for(i=0;i<strlen(s)-n;i++)
		s2[i]=s[i+n]; 
	fin=strcat(s1,t);
	fin=strcat(fin,s2);
	return fin ;
}
