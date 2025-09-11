/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:37:22 by mbarrat           #+#    #+#             */
/*   Updated: 2025/08/29 13:32:43 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z' ;
	while (c >= 'a')
	{
		write (1, &c, 1);
		c--;
	}
}
int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
