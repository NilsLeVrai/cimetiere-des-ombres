#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int pgcd(int a, int b)
{
	int    max;
	int    min;
	int    res;

	max = a > b ? a : b;
	min = a < b ? a : b;
	while (1)
	{
		res = max % min;
		if (res == 0)
			break;
		max = min;
		min = res;
	}
	return (min);
}

int main (int argc, char **argv)
{
	int    a;
	int    b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("pgcd(%d, %d) = %d\n", a, b, pgcd(a, b));
	}
	printf("\n");
}