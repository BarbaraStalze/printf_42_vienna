/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:24:20 by bastalze          #+#    #+#             */
/*   Updated: 2025/11/10 21:21:19 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_printf.h>

void ft_print_text(const char *text, int *count)
{
	int i;

	while (text)
	{
		if (text[i++] == '%' && text[i+1] == 'c' || text[i+1] == 's'|| text[i+1] == 'p'
			|| text[i+1] == 'd'|| text[i+1] == 'i'|| text[i+1] == 'u'|| text[i+1] == 'x'
			|| text[i+1] == 'X')
			i++;
		write(1, text[i], 1);
		i++;
		*count++;
	}
}

int ft_printf(const char *text, ...)
{
	va_list arg;
	int *count;

	if (!text)
		return (-1);
	ft_print_text(text, count);
	va_start(arg, text);
	
	va_end(arg);
}
