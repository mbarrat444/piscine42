/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:40:43 by mbarrat           #+#    #+#             */
/*   Updated: 2025/09/03 16:47:34 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	res = 1;
	while (res * res <= nb)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}
