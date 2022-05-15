/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 10:22:30 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 16:17:22 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
	{
		len = 1;
		start = 0;
	}
	else if (start + len > size)
		len = size - start + 1;
	else
		len = len + 1;
	sub = malloc(len);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len);
	return (sub);
}
