/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarlasc <amarlasc@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:41:36 by amarlasc          #+#    #+#             */
/*   Updated: 2026/05/21 17:41:00 by amarlasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_format(char c, va_list varg)
{

}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	vargs;

	i = 0;
	count = 0;
	va_start(vargs, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
			count += ft_putchar(s[i]);
			i++;
		}
		else
		{
			count += ft_format(s[i + 1], vargs);
			i += 2;
		}
	}
	va_end(vargs);
	return (count);
}

int	main(void)
{
	int	len;

	len = ft_printf("Hola %Alba");
	return (0);
}
