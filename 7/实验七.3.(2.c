#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int num;
	char name[20];
	int mscore;
	int escore;
	int pscore;
	int cscore;
	struct Node*next;
}Student;
typedef struct
{
	Student*head;
	Student*tail;
}List;
void average(List list)
{
	Student*p;
	int sum = 0;
	float xnum ;
	for(p=list.head;p!=NULL;p=p->next)
	{
		sum = p->mscore+p->escore+p->pscore+p->cscore;
		xnum = 1.0*sum/4;
		printf("ѧ��%s��ƽ���ɼ���%.2f\n",p->name,xnum); 
	}
}
void change(List*list)
{
	Student*p;
	int cnt = 0,i,k;
	printf("��ѡ����Ҫ�޸ĵ�ѧ�������");
	scanf("%d",&i);
	for(p=list->head;cnt<i&&p!=NULL;p=p->next)
	{
		cnt++;
	}
	if(cnt==i)
	{
		printf("��������Ҫ�޸ĵ���Ŀ\n");
		printf("1  ����\n");
		printf("2  ѧ��\n");
		printf("3  ��ѧ�ɼ�\n");
		printf("4  Ӣ��ɼ�\n");
		printf("5  ����ɼ�\n");
		printf("6  c���Գɼ�\n");
		scanf("%d",&k);
		if(k==1)
		{
			char nname[20];
			scanf("%s",p->name);
		}
		else
		{
			int nnum;
			scanf("%d",&nnum);
			switch(k)
			{
				case 2:
					p->num = nnum;//ѧ�� 
					break;
				case 3:
					p->mscore = nnum;//��ѧ�ɼ�
					break;
				case 4: 
					p->escore = nnum;//Ӣ��ɼ�
					break;
				case 5:
					p->pscore = nnum;//����ɼ�
					break;
				case 6:
					p->cscore = nnum;//c���Գɼ� 
			}
		}
	}
	else
	{
		printf("û�����ѧ��");
	}
}
Student*create(List*list)
{
	int i = 1;
	while(i!=0)
	{
		i = 0;
//		Student student;
		Student*p=(Student*)malloc(sizeof(Student));//����һ������Ԫ 
		scanf("%d%s%d%d%d%d",&(p->num),p->name,&(p->mscore),&(p->escore),&(p->pscore),&(p->cscore));
		p->next = NULL;
		if(list->head)//�������ͷ���ǿյ� 
		{
			list->tail->next = (Student*)malloc(sizeof(Student));
			list->tail = list->tail->next;
			*(list->tail) = *p;
			list->tail->next =NULL;
		}
		else
		{
			list->head = p;
			list->tail = list->head;
		}
		printf("��Ҫ����ѧ����Ϣ�������롰1�����������롰0���˳�:");
		scanf("%d",&i); 
	}
}
int main()
{
	List list;
	list.head = NULL;
	list.tail = NULL;
	printf("����������ѧ���� ѧ�� ���� ��ѧ�ɼ� Ӣ��ɼ� ����ɼ� C���Գɼ�\n");
	create(&list);
	printf("***********************************************************************\n"); 
	printf("�ѻ��ѧ����Ϣ����ѡ����������Ĳ���\n");
	printf("***********************************************************************\n"); 	
	printf("����1�����ÿ��ѧ���ĸ�����Ϣ\n");
	printf("����2���޸��ƶ�ѧ��ָ�������������\n");
	printf("����3��ͳ��ÿ��ͬѧ��ƽ���ɼ�\n");
	printf("����4���������ͬѧ��ѧ�š����������ſγ̵��ܳɼ���ƽ���ɼ�\n");	
	int flag;
	while(1)
	{
		scanf("%d",&flag);
	Student*p;
	switch(flag)
	{
		case 1: 
		for(p=list.head;p!=NULL;p=p->next)
			printf("ѧ�ţ�%d ������%s ��ѧ�ɼ���%d  Ӣ��ɼ���%d  ����ɼ���%d  C���Գɼ���%d \n",p->num,p->name,p->mscore,p->escore,p->pscore,p->cscore);
			break;
		case 2:
		change(&list);
			break; 
		case 3:
		average(list);
	}
	}
	return 0; 
}
