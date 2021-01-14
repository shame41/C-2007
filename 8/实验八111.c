#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
int substr_count(char *str, const char *sub_str)
{
	if (str == NULL || sub_str == NULL)
	{
		printf("ERROR��[substr_count] parameter(s) should not be NULL!\n");
		return -1;
	}
	int n = 0;                    // ������ʾ�Ӵ��ڱ����ҵ�Ŀ���ַ����г��ֵĴ���
	char *begin_ptr = str;
	char *end_ptr = NULL;        // ��NULL��ʼ����end_ptr����ָֹ����
	while ((end_ptr = strstr(begin_ptr, sub_str)) != NULL)
	{
		end_ptr += strlen(sub_str);
		begin_ptr = end_ptr;           // ������ʼ��ַ�����µ���strstr��������ƥ�䡣
		++n;
	}
	return n;
}
 
 
 
int str_replace(const char *file_path, const char *new_str, const char *old_str)
{
	if (file_path == NULL || new_str == NULL || old_str == NULL)
	{
		printf("ERROR: [str_replace] parameter(s) should not be NULL��\n");
		return -1;
	}
	FILE *fp;
	if ((fp = fopen(file_path, "r+")) == NULL)
	{
		printf("ERROR: file open error!\n");
		return -1;
	}
	long file_len;
	fseek(fp, 0, SEEK_END);	  //  ��λһ��ָ���ļ�ĩβ��ָ�� 
	file_len = ftell(fp);     // �����ǰ�ļ�ָ������ļ���ʼ���ֽ���
	fseek(fp, 0, SEEK_SET);    // �ٶ�λָ�뵽�ļ�ͷ
	char *ori_str = (char *)malloc(file_len*sizeof(char) + 1);
	if (ori_str == NULL)
	{
		printf("ERROR: malloc ori_str failed!\n");
		fclose(fp);
		return -1;
	}
	memset(ori_str, 0, file_len*sizeof(char) + 1);

	int count = 1;
	int ret = fread(ori_str, file_len*sizeof(char), count, fp);

	if (ret != count)
	{
		printf("ERROR: read file error!\n");
		fclose(fp);
		free(ori_str);     //�ͷ�malloc���ٵ��ڴ�����
		return -1;
	}	
 
	int n = substr_count(ori_str, old_str);
	if (n == -1)
	{
		printf("ERROR: substring count error!\n");
		fclose(fp);
		free(ori_str);     //�ͷ�malloc���ٵ��ڴ�����
		return -1;
	}

	
	int rst_str_len = file_len + n * abs(strlen(new_str) - strlen(old_str)) + 1;
	char *rst_str = (char *)malloc(rst_str_len*sizeof(char));
	if (rst_str == NULL)
	{
		printf("ERROR: malloc rst_str failed!\n");
		fclose(fp);
		return -1;
	}
	memset(rst_str, 0, rst_str_len*sizeof(char));

	char *cpy_str = rst_str;
	char *begin_ptr = ori_str;
	char *end_ptr = NULL;
 
    // �滻����
	while ((end_ptr = strstr(begin_ptr, old_str)) != NULL)  //���ַ���ֻҪƥ���ϣ�ִ��ѭ����
	{
		memcpy(cpy_str, begin_ptr, end_ptr- begin_ptr);    
		cpy_str += (end_ptr - begin_ptr);     
		memcpy(cpy_str, new_str, strlen(new_str));     //���ַ������濽��new_str
		cpy_str += strlen(new_str);                   
		end_ptr += strlen(old_str);
		begin_ptr = end_ptr;              
	}
	strcpy(cpy_str,begin_ptr);  

	printf("ori��%s\n", ori_str);
	printf("rst��%s\n", rst_str);
 
	FILE *fp_1;
	if ((fp_1 = fopen(file_path, "w")) == NULL)
	{
		printf("ERROR: file open error!\n");
		return -1;
	}

	ret = fwrite(rst_str,strlen(rst_str),count, fp_1);
	if (ret != count)
	{
		printf("ERROR: write file error!\n");
		fclose(fp);
		free(ori_str);     //�ͷ�malloc���ٵ��ڴ�����
		free(rst_str);
		return -1;
	}

	free(ori_str);     
	free(rst_str);
	fclose(fp_1);
	return 0;
}
int main(int argc, char*argv[])
{
	int loop,cnt=0;
	char ch;
	FILE *fp;
	if(argc==5)
	{
		str_replace(argv[2],argv[3],argv[4]);
		printf("nothing change"); 
	}
	else
	{
		printf("wrong input");
	}
	return 0;
}
