#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	while (src[i] != '\0')
		i++;
	char *p = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
int main ()
{
	char *s = "ouais la zone";
	printf("%s", ft_strdup(s));
}