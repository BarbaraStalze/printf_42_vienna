/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:27:08 by bastalze          #+#    #+#             */
/*   Updated: 2025/11/12 16:22:05 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_x_X(unsigned int n, int *count, char specifier)
{
	char	c;
	char	lower[16];
	char	upper[16];

	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	if (!n || n == 0)
	{
		write (1, "0", 1);
		*count++;
		return ;
	}
	if (n > 15)
		ft_x_X(n / 16, count, specifier);
	c = (n % 16);
	if (specifier == x)
		write (1 , &lower[c], 1);
	else if (specifier == X)
		write (1 , &upper[c], 1);
	*count++;
}
