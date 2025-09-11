/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:12:06 by mbarrat           #+#    #+#             */
/*   Updated: 2025/08/25 11:41:32 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	a;

	x = 0;
	a = size -1;
	while (x <= a)
	{
		y = tab[x];
		tab[x] = tab[a];
		tab[a] = y;
		x++;
		a--;
	}
}
