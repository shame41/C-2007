//Input a string:
//programming↙ （键盘输入）
//programming
//Input a string again:
//language↙ （键盘输入）
//language

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *strcopy(char *, const char *);
int main(void)
{
//	char *p1,*p2,*p3;
//	p1 = s1;
//	p2 = s2;
//	p3 = s3;
	char*s1=(char*)malloc(sizeof(char)*20);
	char*s2=(char*)malloc(sizeof(char)*10);
	char*s3=(char*)malloc(sizeof(char)*20);
	printf("Input a string:\n");
	scanf("%s", s1);
	//s3 = strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n");
	scanf("%s", s2);
	//s3 = strcopy(s1, s2);
	printf("%s\n", strcopy(s1, s2));
	return 0;
}

/*将字符串s复制给字符串t，并且返回串t的首地址*/
char * strcopy(char t[], const char s[])
{
	int i,j;
	i = 0;
	j = 0;
	while(j<=strlen(s))
	{
		t[i] = s[j];
		t[i+1]=0;
		j++;
		i++;
	};
	return (t);
}
