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
//	{        /* fp ָ�� filename */
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
//   }while(1);               /* ����ʾ����д�ַ� */
//	fclose(fp);                      /* �ر�filename */
// return 0;	
//}
//���ض�����дmain����
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
	while(scanf("%c",&ch)!=EOF)          /* ��filename�ж��ַ� */
	   putchar(ch);                  /* ����ʾ����д�ַ� */
	                   
 return 0;	
}
