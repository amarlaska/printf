/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarlasc <amarlasc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:41:36 by amarlasc          #+#    #+#             */
/*   Updated: 2026/05/25 22:34:49 by amarlasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_format(char c, va_list varg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(varg, int));
	else if (c == '%')
		count += ft_putchar('%');
	else if (c == 's')
		count += ft_putstr(va_arg(varg, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(varg, int));
	else if (c == 'x' || c == 'X')
		count += ft_puthex(va_arg(varg, unsigned int), c);
	else if (c == 'u')
		count += ft_putunsigned(va_arg(varg, unsigned int));
	else if (c == 'p')
		count += ft_putptr(va_arg(varg, void *));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	varg;

	i = 0;
	count = 0;
	va_start(varg, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
			count += ft_putchar(s[i]);
			i++;
		}
		else 
		{
			if (s[i + 1] == 'c' || s[i + 1] == 's'|| s[i + 1] == 'd' ||
				s[i + 1] == 'i' || s[i + 1] == '%' || s[i + 1] == 'p'||
				s[i + 1] == 'x' || s[i + 1] == 'X' || s[i + 1] == 'u')
			{
				count += ft_format(s[i + 1], varg);
				i += 2;
			}
			else if (s[i] == '%' && s[i + 1] != '\0')
			{
				count += ft_putchar(s[i]);
				i++;
			}
		}
	}
	va_end(varg);
	return (count);
}

/*
int	main(void)
{
	int	len;

	len = ft_printf("Hola Alba %%\n", NULL);
	ft_printf("\n%d\n", len);
	return (0);
}
*/