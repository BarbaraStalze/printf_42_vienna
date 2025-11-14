/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:20:24 by bastalze          #+#    #+#             */
/*   Updated: 2025/11/14 11:23:25 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
void	ft_c(int c, int *count);
void	ft_s(char *s, int *count);
void	ft_p(long int n, int *count);
void	ft_d_i(int n, int *count);
void	ft_u(unsigned int n, int *count);
void	ft_x_X(unsigned int n, int *count, char specifier);

#endif
