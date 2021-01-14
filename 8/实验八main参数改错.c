#include<stdio.h>
#include<stdlib.h>
//int main(int argc, char* argv[])
//{
//	char ch;
//	FILE *fp;
//	if(argc!=2)
//	{
//		printf("Arguments error!\n");
//		exit(-1);
//	}
//	if((fp=fopen(argv[1],"r"))==NULL)
//	{        /* fp 指向 filename */
//		printf("Can't open %s file!\n",argv[1]);
//		exit(-1);
//	}
//
//	do
//   {
//      ch = fgetc(fp);
//      if( feof(fp) )
//      {
//          break ;
//      }
//      printf("%c", ch);
//   }while(1);               /* 向显示器中写字符 */
//	fclose(fp);                      /* 关闭filename */
// return 0;	
//}
//用重定向重写main函数
int main(int argc, char* argv[])
{
	char ch;
	if(argc!=2)
	{
		printf("Arguments error!\n");
		exit(-1);
	}
	else if(fopen(argv[1],"r")==NULL)
	{
		printf("Can't open %s file!\n",argv[1]);
		exit(-1);
	}
	else
		freopen(argv[1],"r",stdin);
	while(scanf("%c",&ch)!=EOF)          /* 从filename中读字符 */
	   putchar(ch);                  /* 向显示器中写字符 */
	                   
 return 0;	
}
