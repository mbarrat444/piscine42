/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarrat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:42:48 by mbarrat           #+#    #+#             */
/*   Updated: 2025/09/10 16:16:38 by mbarrat          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_totlen(char **strs, int size)
{
	int	i;
	int	j;
	int	total;

	total = 0;
	i = 0;
	j = 0;
	if (!strs[i])
		return (0);
	while (i < size)
	{
		if (strs[i])
		{
			total += ft_strlen(strs[i]);
		}
		i++;
	}
	return (total);
}

char	*ft_strcat(char *result, char **strs, char *sep, int size)
{
	int	j;
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		if (strs[i])
		{
			j = 0;
			while (strs[i][j])
				result[pos++] = strs[i][j++];
		}
		if (i < size -1 && sep)
		{
			j = 0;
			while (sep[j])
				result[pos++] = sep[j++];
		}
		i++;
	}
	result[pos] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	char	*result;

	if (size <= 0 || !strs)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	total = ft_totlen(strs, size);
	if (size > 1 && sep)
		total += ft_strlen(sep) * (size -1);
	result = malloc(sizeof(char) * (total + 1));
	if (!result)
		return (NULL);
	return (ft_strcat(result, strs, sep, size));
}
/*int	main()
{
	char	*strs;
	char *argv[5] = {"felipe", "de", "paula", "alves", "montes"};
	strs = ft_strjoin(5, argv, "--");
	if  (strs)
	{
		printf("%s\n", strs);
		free(strs);
	}
	return (0);
}*/
