#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;
	int	multi;

	i = 0;
	while (str[i])
	{
		multi = 1;
		if (str[i] >= 'a' && str[i] <= 'z')
			multi += str[i] - 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			multi += str[i] - 'A';
		while (multi != 0)
		{
			write(1, &str[i], 1);
			multi--;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putchar(argv[1]);
	write(1, "\n", 1);
	return (0);
}
