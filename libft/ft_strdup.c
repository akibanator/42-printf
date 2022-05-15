/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 02:29:57 by akenji-a          #+#    #+#             */
/*   Updated: 2022/05/13 15:40:24 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(s);
	i = 0;
	str = malloc(str_len + 1);
	if (str == 0)
		return (0);
	while (i < str_len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
