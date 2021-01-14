#include <stdio.h>
/*
输入abcd变成dbfp 
这是不可能实现的！
如输入abcd
第一个字母'a'的ascii码是97
以二进制形式输出是01100001
现在开始加密：
024与135互换
01010010
然后循环左移1位
10100100
这个数是164
不等于'd'的ascii码100 
*/ 
int main()
{
	unsigned char c,v,cc,cn;
	while((c=getchar())!=EOF)
	{
		v = c<<2; 
		v = ((v >> 1) & 0x55555555) | ((v & 0x55555555) << 1);//相邻位交换，来自《位运算的各种骚操作part1》 
		if(c>>6 == 0)
		{
			v>>2;
			v = v|c;
		}
		else
		{
			cn = c>>6<<6;
			v = v>>(2-(c>>6));
			cc = c>>(8-(c>>6));
			cn = cn<<(c>>6);
			c = cc|v|cn;
		}
		//printf("%c ",c);
	}
}
