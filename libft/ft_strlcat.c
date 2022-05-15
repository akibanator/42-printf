/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 23:31:51 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 16:23:43 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	x;
	size_t	y;

	if (n <= ft_strlen(dst))
		return (n + ft_strlen(src));
	x = ft_strlen(dst);
	y = 0;
	while ((src[y] != '\0') && (x + 1 < n))
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[y]));
}
