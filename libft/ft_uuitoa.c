/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uuitoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:34:50 by akenji-a          #+#    #+#             */
/*   Updated: 2022/05/13 15:39:14 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_lennumm(unsigned long long int num, int len_base)
{
	unsigned int	len;

	len = 1;
	while (num > len_base)
	{
		num = num / len_base;
		len++;
	}
	return (len);
}

char	*ft_uuitoa(unsigned long long int num, char *base)
{
	int				len_base;
	unsigned int	len_str;
	char			*str;

	len_base = ft_strlen(base);
	len_str = ft_lennumm(num, len_base);
	str = calloc(len_str + 1, sizeof(char));
	while (len_str > 0)
	{
		len_str--;
		str[len_str] = base[num % len_base];
		num = num / len_base;
	}
	return (str);
}
