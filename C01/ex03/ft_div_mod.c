/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:59:02 by mbarrat           #+#    #+#             */
/*   Updated: 2025/08/21 20:07:56 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	
	a = 10;
	b = 3;
	div = &a;
	mod = &b;
	ft_div_mod(a,b,div,mod);
	printf("div = %d", *div);
	printf("mod = %d", *mod);
}*/
