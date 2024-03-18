int	ft_atoi(const char *str)
{
	int i = 0;
	long res = 0;
	int neg = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * neg);
}
#include <stdio.h>

int main ()
{
	const char *s = "5";
	printf("%d", ft_atoi(s));
}