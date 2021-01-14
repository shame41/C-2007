#include <stdio.h>
typedef struct {
	char name[20];
	int score;
} date;
void dsearch(int,date*,int);
void bubbleSort(date*,int);
int main()
{
	date edu[30];//定义一个长度为30的数组，里边的内容是各个结构 
	int search, i=0;
	int cnt=0;//数组长度 
	date*p =edu;
	printf("请输入学生姓名与分数并输入Ctrl+Z结束输入\n"); 
	while(scanf("%s%d",&edu[i].name,&edu[i].score)!=EOF)//遍历输入各个结构的名字与分数 
	{
		if(edu[i].score<0)
		goto out;
		i++;
		cnt++;
	} 
	bubbleSort(edu,cnt);//排序成绩 
	for(i=0;i<cnt;i++)
		printf("姓名%s\t分数%d\n",edu[i].name,edu[i].score);
	printf("请输入你想查找的成绩：");
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

void dsearch(int key,date* edu,int cnt) //自定义函数binary_search()
{
    int low,high,mid,count=0,count1=0;
    low=0;
    high=cnt;
    while(low<high)    //査找范围不为0时执行循环体语句
    {
        count++;    //count记录査找次数
        mid=(low+high)/2;    //求中间位置
        if(key<edu[mid].score)    //key小于中间值时
            high=mid-1;    //确定左子表范围
        else if(key>edu[mid].score)    //key 大于中间值时
            low=mid+1;    //确定右子表范围
        else if(key==edu[mid].score)    //当key等于中间值时，证明查找成功
        {
            printf("查找成功\n %s    %d",edu[mid].name,key);    //输出査找次数及所査找元素在数组中的位置
            count1++;    //count1记录查找成功次数
            break;
        }
    }
    if(count1==0)    //判断是否查找失敗
        printf("查找失败!");    //査找失敗输出no found
}
