#include <stdio.h>
int main()
{
	int d=0;
	float  a = 2.0, b = 1.0, c = 0.0;
	
		for (;d < 20; d++)
		{
			c = (a / b) + c;
			a = a + b;
			b = a - b;
		}
		printf( "Ç°20ÏîºÍ£º%f", c );

	
	return 0;

}