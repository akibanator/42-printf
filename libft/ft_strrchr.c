/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:26:18 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/27 16:48:47 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	x;

	x = ft_strlen(str);
	while (x + 1)
	{
		if (str[x] == (char)c)
			return ((char *)&str[x]);
		x--;
	}
	return (0);
}
