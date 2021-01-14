#include<stdio.h>
void task0()
{
	printf("task0 is called\n");
}
void task1()
{
	printf("task1 is called\n");
}
void task2()
{
	printf("task2 is called\n");
}
void task3()
{
	printf("task3 is called\n");
}
void task4()
{
	printf("task4 is called\n");
}
void task5()
{
	printf("task5 is called\n");
}
void task6()
{
	printf("task6 is called\n");
}
void task7()
{
	printf("task7 is called\n");
}
void execute(int n ,int num)
{
	switch(num)
	{
		case 0:task0();break;
			case 1:task1();break;
				case 2:task2();break;
					case 3:task3();break;
						case 4:task4();break;
							case 5:task5();break;
								case 6:task6();break;
									case 7:task7();break;
	}
}
void scheduler()
{
	char c;
	while((c=getchar())!='\n')
	{
		execute(1,c-48);
	} 
}
int main()
{
	scheduler(); 
}
