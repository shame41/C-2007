#include<stdio.h>
typedef struct
{
	unsigned bit0:1;
	unsigned bit1:1;
	unsigned bit2:1;
	unsigned bit3:1;
	unsigned bit4:1;
	unsigned bit5:1;
	unsigned bit6:1;
	unsigned bit7:1;	

}bits;
void f0(int b)
{
	printf("the function %d is called!\n",b);
}
void f1(int b)
{
	printf("the function %d is called!\n",b);
}
void f2(int b)
{
	printf("the function %d is called!\n",b);
}
void f3(int b)
{
	printf("the function %d is called!\n",b);
}
void f4(int b)
{
	printf("the function %d is called!\n",b);
}
void f5(int b)
{
	printf("the function %d is called!\n",b);
}
void f6(int b)
{
	printf("the function %d is called!\n",b);
} 
void f7(int b)
{
	printf("the function %d is called!\n",b);
} 

int transfer(int x)//把十进制转为二进制 
{
    int yushu;
    yushu=x%2;
    x/=2;
    return yushu;
}
int main()
{
	void(*p[8])(int) = {f0,f1,f2,f3,f4,f5,f6,f7};
	bits bit;
	unsigned i;
	int cnt = 7;
	scanf("%u",&i);
	bit.bit0 = (i & 1) == 1? 1 : 0;
	bit.bit1 = (i & 2) == 2 ? 1 : 0;
	bit.bit2 = (i & 4) == 4 ? 1 : 0;
	bit.bit3 = (i & 8) == 8 ? 1 : 0;
	bit.bit4 = (i & 16) == 16 ? 1 : 0;
	bit.bit5 = (i & 32) == 32 ? 1 : 0;
	bit.bit6 = (i & 64) == 64 ? 1 : 0;
	bit.bit7 = (i & 128) == 128 ? 1 : 0;
	if(bit.bit0==1) (*p[0])(bit.bit0-1);
	if(bit.bit1==1) (*p[1])(bit.bit0);
	if(bit.bit2==1) (*p[2])(bit.bit0+1);
	if(bit.bit3==1) (*p[3])(bit.bit0+2);
	if(bit.bit4==1) (*p[4])(bit.bit0+3);
	if(bit.bit5==1) (*p[5])(bit.bit0+4);
	if(bit.bit6==1) (*p[6])(bit.bit0+5);
	if(bit.bit7==1) (*p[7])(bit.bit0+6);
	return 0;
}

