/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim <youkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:48:38 by youkim            #+#    #+#             */
/*   Updated: 2021/05/10 11:04:44 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;

	if (!s)
		return (0);
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (0);
	slen = ft_strlen(s);
	if (slen <= start)
	{
		sub[0] = 0;
		return (sub);
	}
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
