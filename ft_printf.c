/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:38:02 by akenji-a          #+#    #+#             */
/*   Updated: 2022/05/15 18:22:14 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static int	ft_check_conversion(const char *str, va_list ap)
{
	int	i;

	i = 0;
	if (*str == 'c')
		i += ft_print_c(va_arg(ap, int));
	if (*str == 's')
		i += ft_print_s(va_arg(ap, char *));
	if (*str == 'i' || *str == 'd')
		i += ft_print_id(va_arg(ap, int));
	if (*str == '%')
		i += ft_print_perc();
	if (*str == 'p' || *str == 'X' || *str == 'x' || *str == 'u')
		i += ft_print_pxu(va_arg(ap, unsigned long long int), str);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%')
			count += ft_check_conversion(++str, ap);
		else
		{
			write(1, str, 1);
			count++;
		}
		str++;
	}
	va_end(ap);
	return (count);
}
