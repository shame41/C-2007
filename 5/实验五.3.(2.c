#include <stdio.h>
typedef struct {
	char name[20];
	int score;
} date;
void dsearch(int,date*,int);
void bubbleSort(date*,int);
int main()
{
	date edu[30];//����һ������Ϊ30�����飬��ߵ������Ǹ����ṹ 
	int search, i=0;
	int cnt=0;//���鳤�� 
	date*p =edu;
	printf("������ѧ�����������������Ctrl+Z��������\n"); 
	while(scanf("%s%d",&edu[i].name,&edu[i].score)!=EOF)//������������ṹ����������� 
	{
		if(edu[i].score<0)
		goto out;
		i++;
		cnt++;
	} 
	bubbleSort(edu,cnt);//����ɼ� 
	for(i=0;i<cnt;i++)
		printf("����%s\t����%d\n",edu[i].name,edu[i].score);
	printf("������������ҵĳɼ���");
	scanf("%d",&search);
	dsearch(search,edu,cnt);
	out:
return 0;
}

void bubbleSort(date *s,int c)
{
	int i,j;
	date m;
	char k;
	for(i=0;i<c-1;i++)
		for(j=0;j<c-1;j++)
			if(s[j].score>s[j+1].score)
			{
				m=s[j];
				s[j]=s[j+1];
				s[j+1]=m;
			}
}

void dsearch(int key,date* edu,int cnt) //�Զ��庯��binary_search()
{
    int low,high,mid,count=0,count1=0;
    low=0;
    high=cnt;
    while(low<high)    //���ҷ�Χ��Ϊ0ʱִ��ѭ�������
    {
        count++;    //count��¼���Ҵ���
        mid=(low+high)/2;    //���м�λ��
        if(key<edu[mid].score)    //keyС���м�ֵʱ
            high=mid-1;    //ȷ�����ӱ�Χ
        else if(key>edu[mid].score)    //key �����м�ֵʱ
            low=mid+1;    //ȷ�����ӱ�Χ
        else if(key==edu[mid].score)    //��key�����м�ֵʱ��֤�����ҳɹ�
        {
            printf("���ҳɹ�\n %s    %d",edu[mid].name,key);    //������Ҵ�����������Ԫ���������е�λ��
            count1++;    //count1��¼���ҳɹ�����
            break;
        }
    }
    if(count1==0)    //�ж��Ƿ����ʧ��
        printf("����ʧ��!");    //����ʧ�����no found
}
