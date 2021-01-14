#include "stdio.h"
#include<string.h>
char *strcopy(char *,char *);
void main(void)
{
    char a[60],b[60]="there is a boat on the lake.";
    printf("%s\n",strcopy(a,b));

}
char *strcopy(char s[],char t[])
{
	int i,j;
	i = 0;
	j = 0;
	while(j<=strlen(t))
	{
		if(s[i]==0)
		{
			s[i] = t[j];
			s[i+1]=0;
			j++;
		}
		i++;
	};
    return (t);
}
