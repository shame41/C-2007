/* ʵ��1-2����������޸���Դ���� */
#include <stdio.h>
int main( )
{
int m, n, k, p, i, d;
printf("input m, n \n");
scanf("%d%d", &m, &n);
if (m<n)									/* ����m��n */
{
	m^=n;
	n^=m;
	m^=n; 
}
k = 0;
while (m&1==0 && n&1 == 0)			/* m��n��Ϊż�� */
{
		m >> 1;								/* ��2Լ��m��n */
		n >> 2;
		k++;
}
for (p = 1, i = 0; i<k; i++)  p *= 2;			/* ��p=2k */
while((d=m-n)!=n)
{
		if(d>n) m = d;
		else
		{
			m = n;
			n = d;
		}
}
d *=p;
printf("the greatest common divisor : %d", d);
return 0;
}
