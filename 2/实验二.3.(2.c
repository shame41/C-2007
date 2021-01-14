#include <stdio.h>
int main()
{
	int flag = 0;
	char word;
	while((word=getchar())!=EOF)
	{
		if(flag==0||word!=' ')
			putchar(word);
		if(word==' ')
			flag = 1;
		else
			flag = 0;
	}
	return 0;
} 
