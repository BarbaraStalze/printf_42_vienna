/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:27:08 by bastalze          #+#    #+#             */
/*   Updated: 2025/11/13 18:07:46 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_x_X(unsigned int n, int *count, char specifier)
{
	int		i;
	char	*lower;
	char	*upper;

	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	if (!n || n == 0)
	{
		write (1, "0", 1);
		(*count)++;
		return ;
	}
	if (n > 15)
		ft_x_X(n / 16, count, specifier);
	i = (n % 16);
	if (specifier == 'x')
		write (1 , &lower[i], 1);
	else if (specifier == 'X')
		write (1 , &upper[i], 1);
	(*count)++;
}
