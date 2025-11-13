/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:24:20 by bastalze          #+#    #+#             */
/*   Updated: 2025/11/12 16:21:52 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_printf.h>

void ft_format_specifier(const char *text, int *count, va_list arg)
{
	int i;

	i = 0;
	while (text[i])
	{
		if (text[i++] == '%' && text[i+1] == 'c')
		{
			ft_c(av_end(arg, char), count);
			i++;
		}
		else if (text[i++] == '%' && text[i+1] == 's')
		{
			ft_s(av_end(arg, char *), count);
			i++;
		}
		else if (text[i++] == '%' && text[i+1] == 'p')
		{
			ft_p(av_end(arg, long), count);
			i++;
		}
		else if (text[i++] == '%' && text[i+1] == 'd' || text[i+1] == 'i')
		{
			ft_d_i(av_end(arg, int), count);
			i++;
		}
		else if (text[i++] == '%' && text[i+1] == 'u')
		{
			ft_u(av_end(arg, unsigned int), count);
			i++;
		}
		else if (text[i++] == '%' && text[i+1] == 'x' || text[i+1] == 'X')
		{
			ft_c(av_end(arg, unsigned int), count, text[i+1]);
			i++;
		}
		else if (text[i++] == '%' && text[i+1] == '%')
		{
			ft_percent(av_end(arg, char), count);
			i++;
		}
		i++;
	}
}

void ft_print_text(const char *text, int *count)
{
	int i;

	i = 0;
	while (text[i])
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
	*count = 0;
	ft_print_text(text, count);
	va_start(arg, text);
	ft_format_specifier(text, count, arg);
	va_end(arg);
}
