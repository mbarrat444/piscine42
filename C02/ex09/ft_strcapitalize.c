/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:46:17 by mbarrat           #+#    #+#             */
/*   Updated: 2025/09/10 17:36:58 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new;

	new = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (new && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!new && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			new = 0;
		}
		else
			new = 1;
		i++;
	}
	return (str);
}
/*int main(void)
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s", ft_strcapitalize(str));
}*/
