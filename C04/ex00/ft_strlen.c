/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:24:42 by mbarrat           #+#    #+#             */
/*   Updated: 2025/08/28 17:55:45 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	else
	{
		while (str[i])
			i++;
		return (i);
	}
}
/*int	main(void)
{
	char str[] = "Mai-Lan";

	printf("%d", ft_strlen(str));
}*/
