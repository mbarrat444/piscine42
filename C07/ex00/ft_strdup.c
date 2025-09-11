/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:00:56 by mbarrat           #+#    #+#             */
/*   Updated: 2025/09/10 20:17:16 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	dest = 0;
	i = 0;
	if (src == NULL)
		return (NULL);
	len = ft_len(src);
	dest = malloc(sizeof(char) * (len +1));
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	printf("%s", ft_strdup(""));
}*/
