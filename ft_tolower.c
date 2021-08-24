/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozakoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:53:50 by nozakoya          #+#    #+#             */
/*   Updated: 2021/04/26 16:38:55 by nozakoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	sym;

	sym = c;
	if (sym >= 65 && sym <= 90)
	{
		return ((int)sym + 32);
	}
	else
		return ((int)sym);
}
