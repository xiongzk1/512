#include<stdio.h>
int main()
{

	int a = 0, b,c,d,e,f;
	printf("请输入一位正整数：");
	scanf_s("%d", &a);
	if (a < 0 || a>99999)
	{
		printf("输入错误，请重新输入：");
		scanf_s("%d", a);
	}
	b = a / 10000;
	c = a / 1000;
	d = a / 100;
	e = a/ 10;
	f = a;
	if (b > 1 && b < 9)
	{
		printf("%d是五位数", a);
		printf("分别输出为%d %d %d %d %d\n", b, c - b * 10, d - c * 10, e - d * 10, f - e * 10);
		printf("逆序输出为%d %d %d %d %d\n", f - e * 10, e - d * 10, d - c * 10, c - b * 10, b);

	}
	if (c > 1 && c < 9)
	{
		printf("%d是四位数",a);
		printf("分别输出为%d %d %d %d\n", c - b * 10, d - c * 10, e - d * 10, f - e * 10);
		printf("逆序输出为%d %d %d %d\n", f - e * 10, e - d * 10, d - c * 10, c - b * 10);
	}
	if (d > 1 && d < 9)
	{
		printf("%d是三位数", a);
		printf("分别输出为%d %d %d\n", d - c * 10, e - d * 10, f - e * 10);
		printf("逆序输出为%d %d %d\n", f - e * 10, e - d * 10, d - c * 10);

	}
	if (e > 1 && e < 9)
	{
		printf("%d是两位数", a);
		printf("分别输出为%d %d\n", e - d * 10, f - e * 10);
		printf("逆序输出为%d %d\n", f - e * 10, e - d * 10);
	}
	if (f > 1 && f < 9)
	{
		printf("%d是一位数", a);
		printf("分别输出为%d\n", f );
		printf("逆序输出为%d\n", f );
	}


	return 0;
}