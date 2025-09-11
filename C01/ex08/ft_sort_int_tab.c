/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:04:50 by mbarrat           #+#    #+#             */
/*   Updated: 2025/08/25 12:06:53 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	a;

	x = 0;
	a = size -1;
	while (x < a)
	{
		if (tab[x] > tab[x +1])
		{
			y = tab[x];
			tab[x] = tab[x +1];
			tab[x +1] = y;
			x = 0;
		}
		else
		{
			x++;
		}
	}
}
