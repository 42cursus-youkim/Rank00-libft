/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim <youkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:47:16 by youkim            #+#    #+#             */
/*   Updated: 2021/05/09 21:34:44 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	st_strsnum(char const *s, char c)
{
	size_t	i;
	size_t	numstrs;

	i = 0;
	numstrs = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			numstrs++;
			while (s[i] && (s[i] != c))
				i++;
		}
	}
	return (numstrs);
}

static int	st_lenstr(size_t i, char const *s, char c)
{
	int len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static char	**st_alloc2str(char **str2d, size_t numstrs, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i] && j < numstrs)
	{
		while (s[i] == c)
			i++;
		str2d[j] = malloc((st_lenstr(i, s, c) + 1) * sizeof(char));
		if (!str2d[j])
			return (ft_purge2str(str2d));
		k = 0;
		while (s[i] && s[i] != c)
		{
			str2d[i][k] = s[i];
			i++;
			k++;
		}
		str2d[j][k] = 0;
	}
	str2d[j] = 0;
	return (str2d);
}

char		**ft_split(char const *s, char c)
{
	char	**str2d;
	size_t	numstrs;

	if (!s)
		return (0);
	numstrs = st_strsnum(s, c);
	str2d = malloc((numstrs + 1) * sizeof(char *));
	if (!str2d)
		return (0);
	return (st_alloc2str(str2d, numstrs, s, c));
}
