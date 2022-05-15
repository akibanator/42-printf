/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:14:14 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 16:34:03 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	x;

	x = 0;
	if (!dst && !src)
		return (0);
	while (x < n)
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		if ((unsigned char)c == ((unsigned char *)src)[x])
			return (dst + x + 1);
		x++;
	}
	return (0);
}
