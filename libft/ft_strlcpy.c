/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 22:44:19 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 16:22:35 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	x;

	if (src == NULL || dest == NULL)
		return (0);
	if (size > 0)
	{
		x = 0;
		while (x < size - 1 && src[x])
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (ft_strlen(src));
}
