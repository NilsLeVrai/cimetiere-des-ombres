#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int step = end > start ? -1 : 1;
    int len = end > start ? end - start : start - end;
    int *banon = (int *)malloc(sizeof(int) * len + 1);
    if (!banon)
        return (NULL);
	for (int i = 0; i <= len; i++)
	{
        banon[i] = end;
        end += step;
    }
    return (banon);
}

int *ft_range(int start, int end)
{
    int step = end > start ? 1 : -1;
    int len = end > start ? end - start : start - end;
    int *banon = (int *)malloc(sizeof(int) * len + 1);
    if (!banon)
        return (NULL);
	for (int i = 0; i <= len; i++)
	{
        banon[i] = start;
        start += step;
    }
    return (banon);
}
#include <stdio.h>
int main ()
{
    int a = 1;
    int b = -2;
    int *tabtab = ft_range(a, b);
    int i = 0;
    while (i < 4)
    {
        printf("%d\n", tabtab[i]);
        i++;
    }
}