/*ʵ��5-1����Ĵ�����ٵ��������*/
#include<stdio.h>
void strcate(char [],char []);
void strdelc(char [],char );
int main(void)
{
char a[]="Language", b[20]="Programming";
	printf("%s %s\n", b,a);
	strcate(b,a);
	printf("%s %s\n",b,a);
	strdelc(b, 'a');
return 0;
}
void strcate(char t[],char s[])
{
int i = 0,  j = 0;
while(t[i]!='\0')
	i++;
while(s[j]!='\0')
{
	t[i]=s[j];
	j++;
	i++;
}
}
void strdelc(char s[], char c)
{
		int j,k;
		for(j=0,k=0; s[j] != '\0'; j++)
		{
			if(s[j] == c)	j=j+1;
			printf("%c",s[j]);
		}
}
