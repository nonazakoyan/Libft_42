/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 22:33:39 by nozakoya          #+#    #+#             */
/*   Updated: 2021/05/01 06:19:16 by nozakoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*src;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	src = (char *)malloc(len);
	i = 0;
	while (i < len)
	{
		src[i] = f(i, s[i]);
		++i;
	}
	src[i] = '\0';
	return (src);
}
