/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/29 16:51:25 by abrault           #+#    #+#             */
/*   Updated: 2014/05/02 12:45:56 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int		add_letter(char c, int o, int p)
{
	static int	i = 0;

	if (o)
		return (i);
	if (p == -1)
	{
		i = 0;
		return (0);
	}
	if (p)
	{
		i = i + p;
		return (1);
	}
	i++;
	write(1, &c, 1);
	return (1);
}

int		ft_putnbr(int n)
{
	if (n < 0)
	{
		add_letter('-', 0, 0);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		add_letter(n + 48, 0, 0);
	return (1);
}

int		ft_putstrl(char *str)
{
	int		i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		add_letter(str[i], 0, 0);
		i++;
	}
	return (1);
}

int		search_option(char c, va_list *ap)
{
	if (c == 's')
		return (ft_putstrl(va_arg(*ap, char*)));
	else if (c == 'c')
		return (add_letter(va_arg(*ap, int), 0, 0));
	else if (c == '%')
		return (add_letter('%', 0, 0));
	else if (c == 'd')
		return (ft_putnbr(va_arg(*ap, int)));
	else
	{
		va_arg(*ap, void*);
		return (add_letter(c, 0, 0));
	}
	return (0);
}

int		ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;

	va_start(ap, str);
	i = 0;
	add_letter(' ', 0, -1);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && (i++))
			i += search_option(str[i], &ap);
		else
			i += add_letter(str[i], 0, 0);
	}
	va_end(ap);
	return (add_letter(0, 1, 0));
}
