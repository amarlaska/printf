/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarlasc <amarlasc@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:41:36 by amarlasc          #+#    #+#             */
/*   Updated: 2026/05/21 18:44:54 by amarlasc         ###   ########.fr       */
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
	else if (c == 's')
		count += ft_putstr(va_arg(varg, char *));
	else if (c == 'd')
		count += ft_putnbr(va_arg(varg, int));
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
			count += ft_format(s[i + 1], varg);
			i += 2;
		}
	}
	va_end(varg);
	return (count);
}

int	main(void)
{
	int	len;

	len = ft_printf("Hola Alba %d\n", 42);
	ft_printf("\n%d\n", len);
	len = ft_printf("Hola Alba %s\n", "Marlasca Abasolo");
	ft_printf("\n%d\n", len);
	len = ft_printf("Hola Alba %k\n", 'M');
	ft_printf("\n%d\n", len);
	return (0);
}
