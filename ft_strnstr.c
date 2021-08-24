/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 09:33:29 by nozakoya          #+#    #+#             */
/*   Updated: 2021/04/26 16:29:32 by nozakoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[j])
		return (char*)(haystack);
	while (haystack[i] && needle[j] && len)
	{
		if (haystack[i] == needle[j])
			j++;
		else if (j)
		{
			j = 0;
			continue;
		}
		i++;
		len--;
	}
	if (!needle[j])
		return (char*)(haystack + i - j);
	return (0);
}
