/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:34:42 by nozakoya          #+#    #+#             */
/*   Updated: 2021/04/26 16:24:17 by nozakoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = 0;
	if (d_len < dstsize)
		s_len += d_len;
	else
		s_len += dstsize;
	if (dstsize > 0)
	{
		while (*(src + i) && (i + d_len) < dstsize - 1)
		{
			*(dst + i + d_len) = *(src + i);
			i++;
		}
		*(dst + d_len + i) = '\0';
	}
	return (s_len);
}
