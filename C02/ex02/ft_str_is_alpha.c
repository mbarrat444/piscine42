/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:00:56 by mbarrat           #+#    #+#             */
/*   Updated: 2025/08/28 10:39:27 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char a[] = "AhdhdhhkkP";

	printf("%d", ft_str_is_alpha(a));
}*/
