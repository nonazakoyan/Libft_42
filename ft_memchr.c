/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 03:22:03 by nozakoya          #+#    #+#             */
/*   Updated: 2021/04/26 15:06:08 by nozakoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*src;
	char	c1;

	i = 0;
	c1 = (char)c;
	src = (char*)s;
	while (i < n)
	{
		if (*(char*)src == c1)
		{
			return (src);
		}
		++i;
		++src;
	}
	return (0);
}
