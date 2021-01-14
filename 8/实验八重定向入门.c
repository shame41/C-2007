#include <stdio.h>
int main(void)
{
	short a=0x253f/*十四位*/,b=0x7b7d/*十五位*/;
	//10010100111111  111101101111101
	char ch;
	FILE *fp1,*fp2;
	fp1=fopen("d:\\abc1.bin","wb+");//创建二进制文件 
    fp2=fopen("d:\\abc2.txt","w+");//创建文本文件 
	fwrite(&a,sizeof(char),1,fp1);//把a以二进制形式输入二进制文件 
	fwrite(&b,sizeof(char),1,fp1);//把b以二进制形式输入二进制文件 
	//如果把short改成char,那么ab的值被截断(写入时)  
	fprintf(fp2,"%d %d",a,b); //把a，b以文本形式写入文本文件 
	//把hx改成d数据会变成十进制 
    rewind(fp1); rewind(fp2);//重定向fp1,fp2 
	while((ch = fgetc(fp1)) != EOF) 
		putchar(ch);//在屏幕上输入重定向所指的文件的内容 
	putchar('\n');
	
	while((ch = fgetc(fp2)) != EOF) 
		putchar(ch);//同上 
	putchar('\n');

	fclose(fp1);
	fclose(fp2);
 return 0;
}
