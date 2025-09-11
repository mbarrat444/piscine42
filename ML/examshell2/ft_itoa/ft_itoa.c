#include <stdio.h>
#include <stdlib.h>

int	countlen(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int	len;
	long int	n;
	int	i;

	n = nbr;
	i = 0;
	len = countlen(nbr);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n < 0 || len == 0)
		len++;
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
		i++;
	}
	while (len > i)
	{
		len--;
		res[len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
/*int main(void)
{
	char *str = ft_itoa(-2147483648);
	printf("%s\n", str);
}*/
