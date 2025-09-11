/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:47:15 by mbarrat           #+#    #+#             */
/*   Updated: 2025/08/28 14:51:19 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = "GROS";

	printf("%s", ft_strlowcase(str));
}*/
