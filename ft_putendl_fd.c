/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 23:02:41 by nozakoya          #+#    #+#             */
/*   Updated: 2021/04/26 15:20:48 by nozakoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	if (s[i] == '\0')
		write(fd, "\n", 1);
	while (i < len)
	{
		write(fd, &s[i], 1);
		if (i == len - 1)
		{
			write(fd, "\n", 1);
		}
		++i;
	}
}
