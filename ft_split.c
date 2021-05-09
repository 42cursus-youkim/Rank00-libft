/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim <youkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:47:16 by youkim            #+#    #+#             */
/*   Updated: 2021/05/09 19:54:51 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strslen(char const *s, char c)
{

}

char		**ft_split(char const *s, char c)
{
	char	**str2d;
	size_t	numstrs;

	if (!s)
		return (0);
	numstrs = ft_strslen(s, c);
	str2d = malloc(numstrs * sizeof(char *));
	if (!str2d)
		return (0);
	return (str2d);
}
