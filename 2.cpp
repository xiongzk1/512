#include<stdio.h>
int main()
{

	int a = 0, b,c,d,e,f;
	printf("������һλ��������");
	scanf_s("%d", &a);
	if (a < 0 || a>99999)
	{
		printf("����������������룺");
		scanf_s("%d", a);
	}
	b = a / 10000;
	c = a / 1000;
	d = a / 100;
	e = a/ 10;
	f = a;
	if (b > 1 && b < 9)
	{
		printf("%d����λ��", a);
		printf("�ֱ����Ϊ%d %d %d %d %d\n", b, c - b * 10, d - c * 10, e - d * 10, f - e * 10);
		printf("�������Ϊ%d %d %d %d %d\n", f - e * 10, e - d * 10, d - c * 10, c - b * 10, b);

	}
	if (c > 1 && c < 9)
	{
		printf("%d����λ��",a);
		printf("�ֱ����Ϊ%d %d %d %d\n", c - b * 10, d - c * 10, e - d * 10, f - e * 10);
		printf("�������Ϊ%d %d %d %d\n", f - e * 10, e - d * 10, d - c * 10, c - b * 10);
	}
	if (d > 1 && d < 9)
	{
		printf("%d����λ��", a);
		printf("�ֱ����Ϊ%d %d %d\n", d - c * 10, e - d * 10, f - e * 10);
		printf("�������Ϊ%d %d %d\n", f - e * 10, e - d * 10, d - c * 10);

	}
	if (e > 1 && e < 9)
	{
		printf("%d����λ��", a);
		printf("�ֱ����Ϊ%d %d\n", e - d * 10, f - e * 10);
		printf("�������Ϊ%d %d\n", f - e * 10, e - d * 10);
	}
	if (f > 1 && f < 9)
	{
		printf("%d��һλ��", a);
		printf("�ֱ����Ϊ%d\n", f );
		printf("�������Ϊ%d\n", f );
	}


	return 0;
}