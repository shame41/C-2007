#include <stdio.h>
int main()
{	
	int i;
	char c;
	while((c=getchar())!=EOF)
	{
		if(c>=65&&c<=90)
		{
			c=c+32;
			putchar(c);
		}
		else
			putchar(c);
	}

return 0;	
} 
