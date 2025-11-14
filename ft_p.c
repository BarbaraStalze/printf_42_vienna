/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:50:33 by bastalze          #+#    #+#             */
/*   Updated: 2025/11/13 17:59:26 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_recursion(long int n, int *count)
{
	int		i;
	char	*lower;

	lower = "0123456789abcdef";
	if (!n || n == 0)
	{
		write (1, "0", 1);
		(*count)++;
		return ;
	}
	if (n > 15)
		ft_recursion(n / 16, count);
	i = (n % 16);
	write (1 , &lower[i], 1);
	(*count)++;
}

void	ft_p(long int n, int *count)
{
	if (n > 0)
	{
		write (1, "0x", 2);
		*count = *count + 2;
	}
	ft_recursion (n, count);
}
