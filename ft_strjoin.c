 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:23:47 by nozakoya          #+#    #+#             */
/*   Updated: 2021/04/30 01:50:06 by nozakoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_res(char const *s1, char const *s2, size_t len)
{
	size_t	i;
	char	*marge;

	marge = (char *)malloc(len + 1);
	i = 0;
	while (i < len)
	{
		if (*s1)
		{
			marge[i] = *(char *)s1;
			++s1;
		}
		else if (*s2)
		{
			marge[i] = *(char *)s2;
			++s2;
		}
		if (i == len - 1)
		{
			marge[i + 1] = '\0';
			break ;
		}
		++i;
	}
	return (marge);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*marge;
	size_t	marge_len;

	marge_len = ft_strlen(s1) + ft_strlen(s2);
	marge = ft_res(s1, s2, marge_len);
	return (marge);
}
