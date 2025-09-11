/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:33:15 by mbarrat           #+#    #+#             */
/*   Updated: 2025/08/29 13:07:48 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a' ;
	while (c <= 'z')
	{
		write (1, &c, 1);
		c++;
	}
}
int main(void)
{
	ft_print_alphabet();
	return (0);
}
