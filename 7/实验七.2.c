#include "stdio.h"
#include "stdlib.h"
struct s_list
{ 
int data; /* ������ */
struct s_list *next; /* ָ���� */ 
} ;
struct s_list *create_list (struct s_list *head,int *p);
int main(void)
{
	struct s_list *head = NULL,*p;
	int s[]={1,2,3,4,5,6,7,8,0}; /* 0Ϊ������� */
	p = create_list(head,s); /* ���������� */
//	p=head; /*����ָ��pָ����ͷ */
	while(p!=0)
	{
		printf("%d\t",p->data); /* ����������ֵ */
		p=p->next; /*����ָ��pָ����һ��� */
	}
	printf("\n");
	return 0;
}
//struct s_list *create_list(struct s_list *headp,int *p)
//{
//	struct s_list * loc_head=NULL,*tail;
//	if(p[0]==0) /* �൱��*p==0 */;
//	else
//	{ /* loc_headָ��̬����ĵ�һ����� */
//		loc_head=(struct s_list *)malloc(sizeof(struct s_list));
//		loc_head->data=*p++; /* ��������ֵ */
//		tail=loc_head; /* tailָ���һ����� */
//		while(*p)
//		{ /* tail��ָ����ָ����ָ��̬�����Ľ�� */
//			tail->next=(struct s_list *)malloc(sizeof(struct s_list));
//			tail=tail->next; /* tailָ���´����Ľ�� */
//			tail->data=*p++; /* ���´����Ľ���������ֵ */
//		}
//		tail->next=NULL; /* ��ָ����NULLֵ */
//	}
//	headp=loc_head; /* ʹͷָ��headpָ���´��������� */
//	return headp;
//}
                          //��ջ 
struct s_list *create_list(struct s_list *headp,int *p)
{
	struct s_list * loc_head=NULL,*tail;
	if(p[0]==0) /* �൱��*p==0 */;
	else
	{ /* loc_headָ��̬����ĵ�һ����� */
		tail=(struct s_list *)malloc(sizeof(struct s_list));
		tail->data=*p++; /* ��������ֵ */
		tail->next = NULL;
		loc_head=(struct s_list *)malloc(sizeof(struct s_list));
		loc_head->data=*p++;
		loc_head->next = tail;
		while(*p)
		{ 
			tail = loc_head;
			loc_head=(struct s_list *)malloc(sizeof(struct s_list));
			loc_head->data=*p++; /* tailָ���´����Ľ�� */
 			loc_head->next = tail;
		}
//		loc_head->next=NULL; /* ��ָ����NULLֵ */
	}
	headp=loc_head; /* ʹͷָ��headpָ���´��������� */
	return headp;
}
//struct s_list *create_list(struct s_list *head,int *p)
//{
//	int i = 0;
//	struct s_list * loc_head=NULL,*tail;
//	if(p[0]==0) /* �൱��*p==0 */;
//	else
//	{ /* loc_headָ��̬����ĵ�һ����� */
//		loc_head=(struct s_list *)malloc(sizeof(struct s_list));
//		loc_head->data=*p++; /* ��������ֵ */
//		//tail=loc_head; /* tailָ���һ����� */
//		while(*p)
//		{ 
//			if(i<1)
//			{
//				loc_head->next=(struct s_list *)malloc(sizeof(struct s_list));
//				loc_head->next->data = *p++;
//				tail = loc_head->next;
//		}
//			else
//			{
//				tail->next=(struct s_list *)malloc(sizeof(struct s_list));
//				tail=tail->next; /* tailָ���´����Ľ�� */
//				tail->data=*p++; /* ���´����Ľ���������ֵ */
//			}
//			i++;
//		}
//		tail->next=NULL; /* ��ָ����NULLֵ */
//	}
//	return loc_head; /* ʹͷָ��headpָ���´��������� */
//}
/*
��Ҫ����ָ�� 
*/
