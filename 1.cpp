#include <stdio.h>
int main()
{
	int a, b, c, e = 0;
	for (a = 1; a < 5; a++)
	{
		for (b = 1; b < 5; b++)
		{
			for (c = 1; c < 5; c++)
			{
				if (a != b && b != c && a != c)
				{
					printf("%d%d%d\t", a, b, c);
					e++;
				}
			}
		}
		
	}
        printf("一共有%d个数", e);
		return 0;

}
