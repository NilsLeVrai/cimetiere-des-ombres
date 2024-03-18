#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	int max = a > b ? a : b;
	while (1)
	{
		if (max % a == 0 && max % b == 0)
			break;
		max++;
	}
	return (max);
}

int main()
{
	unsigned int    a;
	unsigned int    b;

	a = 5;
	b = 5000;
	printf("lcm(%d, %d) = %d\n", a, b, lcm(a, b));
	return (0);
}