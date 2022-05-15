/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:44:15 by akenji-a          #+#    #+#             */
/*   Updated: 2022/05/15 18:23:02 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdlib.h>
# include	<unistd.h>
# include	<stdarg.h>
# include	"libft/libft.h"

# define DECIMAL "0123456789"
# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef"

int		ft_printf(const char *str, ...);

int		ft_print_c(int c);
int		ft_print_s(char *str);
int		ft_print_id(int nbr);
int		ft_print_perc(void);
int		ft_print_pxu(unsigned long long int nbr, const char *str);

#endif
