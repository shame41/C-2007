#include <stdio.h>
#define CHANGE 1
int main()
{
	char word[100];
	scanf("%s",word);
	if(CHANGE==1)
	{
		for(int i = 0;word[i];i++)
		{
			if(word[i]>=65&&word[i]<=90)
				word[i]+=32;	
			else if(word[i]>=97&&word[i]<=122)
				word[i]-=32;
		} 
	}
	printf("%s\n",word);
	return 0;
}
