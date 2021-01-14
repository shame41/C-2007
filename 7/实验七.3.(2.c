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
		printf("学生%s的平均成绩是%.2f\n",p->name,xnum); 
	}
}
void change(List*list)
{
	Student*p;
	int cnt = 0,i,k;
	printf("请选择想要修改的学生的序号");
	scanf("%d",&i);
	for(p=list->head;cnt<i&&p!=NULL;p=p->next)
	{
		cnt++;
	}
	if(cnt==i)
	{
		printf("请输入想要修改的项目\n");
		printf("1  名字\n");
		printf("2  学号\n");
		printf("3  数学成绩\n");
		printf("4  英语成绩\n");
		printf("5  物理成绩\n");
		printf("6  c语言成绩\n");
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
					p->num = nnum;//学号 
					break;
				case 3:
					p->mscore = nnum;//数学成绩
					break;
				case 4: 
					p->escore = nnum;//英语成绩
					break;
				case 5:
					p->pscore = nnum;//物理成绩
					break;
				case 6:
					p->cscore = nnum;//c语言成绩 
			}
		}
	}
	else
	{
		printf("没有这个学生");
	}
}
Student*create(List*list)
{
	int i = 1;
	while(i!=0)
	{
		i = 0;
//		Student student;
		Student*p=(Student*)malloc(sizeof(Student));//定义一个链表单元 
		scanf("%d%s%d%d%d%d",&(p->num),p->name,&(p->mscore),&(p->escore),&(p->pscore),&(p->cscore));
		p->next = NULL;
		if(list->head)//如果链表头不是空的 
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
		printf("还要输入学生信息吗，请输入“1”继续，输入“0”退出:");
		scanf("%d",&i); 
	}
}
int main()
{
	List list;
	list.head = NULL;
	list.tail = NULL;
	printf("请依次输入学生的 学号 姓名 数学成绩 英语成绩 物理成绩 C语言成绩\n");
	create(&list);
	printf("***********************************************************************\n"); 
	printf("已获得学生信息表，请选择你接下来的操作\n");
	printf("***********************************************************************\n"); 	
	printf("输入1，输出每个学生的各项信息\n");
	printf("输入2，修改制定学生指定数据项的内容\n");
	printf("输入3，统计每个同学的平均成绩\n");
	printf("输入4，输入各个同学的学号、姓名、四门课程的总成绩和平均成绩\n");	
	int flag;
	while(1)
	{
		scanf("%d",&flag);
	Student*p;
	switch(flag)
	{
		case 1: 
		for(p=list.head;p!=NULL;p=p->next)
			printf("学号：%d 姓名：%s 数学成绩：%d  英语成绩：%d  物理成绩：%d  C语言成绩：%d \n",p->num,p->name,p->mscore,p->escore,p->pscore,p->cscore);
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
