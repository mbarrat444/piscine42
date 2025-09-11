/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:02:00 by mbarrat           #+#    #+#             */
/*   Updated: 2025/09/02 14:46:52 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	printf("%d", ft_iterative_power(nb,power));
}*/
