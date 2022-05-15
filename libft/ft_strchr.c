/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:01:36 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 14:45:54 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*s;
	unsigned char	chr;

	s = (unsigned char *)str;
	chr = (unsigned char)c;
	if (*s == chr)
		return ((char *)s);
	while (*s++)
	{
		if (*s == chr)
			return ((char *)s);
	}
	return (0);
}
