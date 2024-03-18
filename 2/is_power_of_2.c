#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	return (n != 0 && (n & (n - 1)) == 0);
}

int main()
{
	unsigned int a = 2048;
	printf("%d", is_power_of_2(a));
}
