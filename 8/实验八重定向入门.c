#include <stdio.h>
int main(void)
{
	short a=0x253f/*ʮ��λ*/,b=0x7b7d/*ʮ��λ*/;
	//10010100111111  111101101111101
	char ch;
	FILE *fp1,*fp2;
	fp1=fopen("d:\\abc1.bin","wb+");//�����������ļ� 
    fp2=fopen("d:\\abc2.txt","w+");//�����ı��ļ� 
	fwrite(&a,sizeof(char),1,fp1);//��a�Զ�������ʽ����������ļ� 
	fwrite(&b,sizeof(char),1,fp1);//��b�Զ�������ʽ����������ļ� 
	//�����short�ĳ�char,��ôab��ֵ���ض�(д��ʱ)  
	fprintf(fp2,"%d %d",a,b); //��a��b���ı���ʽд���ı��ļ� 
	//��hx�ĳ�d���ݻ���ʮ���� 
    rewind(fp1); rewind(fp2);//�ض���fp1,fp2 
	while((ch = fgetc(fp1)) != EOF) 
		putchar(ch);//����Ļ�������ض�����ָ���ļ������� 
	putchar('\n');
	
	while((ch = fgetc(fp2)) != EOF) 
		putchar(ch);//ͬ�� 
	putchar('\n');

	fclose(fp1);
	fclose(fp2);
 return 0;
}
