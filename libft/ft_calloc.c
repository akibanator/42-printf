/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 00:43:22 by akenji-a          #+#    #+#             */
/*   Updated: 2021/06/14 00:55:43 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num * size > INT_MAX)
		return (0);
	ptr = malloc(num * size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, num * size);
	return (ptr);
}
