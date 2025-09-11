#include <stdio.h>

char	*swap_cases(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int	main(void)
{
	char str[] = "WeLcOmE tO 42 sChoOl.";
	printf("%s", swap_cases(str));
	return (0);
}*/
