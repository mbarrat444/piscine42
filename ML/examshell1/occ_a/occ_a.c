#include <stdio.h>

int	occ_a(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == 'A')
			count++;
		i++;
	}
	return (count);
}
/*int main(void)
{
	printf("%d", occ_a("ZzAaa"));
}*/
