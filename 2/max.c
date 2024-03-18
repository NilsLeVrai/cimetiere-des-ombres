int		max(int* tab, unsigned int len)
{
	int i = 0;
	int max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
#include <stdio.h>
int main ()
{
	int tab[] = {12, -485, -84, 0, -4545848, 122, 1345657655};
	int len = 7;
	printf("%d", max(tab, len));
}