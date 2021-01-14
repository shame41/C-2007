/*实验3-2程序修改替换第(2)题程序：根据公式计算 s*/
#include<stdio.h>
//double mulx(double x,int n);
//long fac(int n);
double sum(double x,int n)
{
	long h=1;
	int i,cnt;
	double z=1.0,x1;
	x1 = x;
	for(i=1,cnt=2;i<=n;i++,cnt++)
	{	
		z=z+x1/h;
		h=h*cnt;
		x1 = x1*x;
	}
	return z;
 } 
/* double mulx(double x,int n)
{
	int i;
	double z=1.0;
	for(i=0;i<n;i++)
	{
		z=z*x;
	}
	return z;
 } */
/* long fac(int n)
 {
 	int i;
 	long h=1;
 	for(i=2;i<=n;i++)
	{
		h=h*i;
	}
	return h; 	
 }*/
 int main()
 {
 	double x;
	int n;
	printf("Input x and n:");
	scanf("%lf%d",&x,&n);
	printf("The result is %lf:",sum(x,n));
	return 0;	  
 }
