/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:05:17 by mbarrat           #+#    #+#             */
/*   Updated: 2025/09/07 17:39:33 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	arr = malloc(sizeof(int) * len);
	if (min >= max)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*arr;
	int	len;

	arr = 0;
	min = 4;
	max = 9;
	len = max -min;
	arr = ft_range(min, max);
	i = 0;
	while (i < len)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	arr = 0;
	return (0);
}*/
