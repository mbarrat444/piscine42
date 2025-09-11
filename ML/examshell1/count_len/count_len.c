#include <stdio.h>

int	count_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*int main(void)
{
	printf("%d", count_len("Mai-Lan"));
}*/
