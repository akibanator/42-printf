/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:41:41 by akenji-a          #+#    #+#             */
/*   Updated: 2022/05/16 13:04:32 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_c(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_s(char *str)
{
	int	len;

	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	len = 0;
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (len);
}

int	ft_print_id(int nbr)
{
	char	*nbr_int;
	int		len;

	len = 0;
	nbr_int = ft_itoa(nbr);
	len = ft_strlen(nbr_int);
	ft_putstr_fd(nbr_int, 1);
	free(nbr_int);
	return (len);
}

int	ft_print_perc(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_print_pxu(unsigned long long int nbr, const char *str)
{
	char	*nbr_pxu;
	int		len;

	len = 0;
	if (*str == 'p')
	{
		if (nbr == 0)
			return (write(1, "(nil)", 5));
		ft_putstr_fd("0x", 1);
		nbr_pxu = ft_uuitoa(nbr, HEX_LOWER);
		len = 2;
	}
	else if (*str == 'x')
		nbr_pxu = ft_uuitoa((unsigned int) nbr, HEX_LOWER);
	else if (*str == 'X')
		nbr_pxu = ft_uuitoa((unsigned int) nbr, HEX_UPPER);
	else if (*str == 'u')
		nbr_pxu = ft_uuitoa((unsigned int) nbr, DECIMAL);
	len = len + ft_strlen(nbr_pxu);
	ft_putstr_fd(nbr_pxu, 1);
	free(nbr_pxu);
	return (len);
}
