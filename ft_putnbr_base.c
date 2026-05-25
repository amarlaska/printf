/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarlasc <amarlasc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:00:49 by amarlasc          #+#    #+#             */
/*   Updated: 2026/05/25 22:30:04 by amarlasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_base(unsigned long n, char *base)
{
    int           len;
    int           count;

    len = 0;
    count = 0;
    while (base[len])
        len++;
    if (n >= (unsigned long)len)
        count += ft_putnbr_base(n / len, base);
    count += ft_putchar(base[n % len]);
    return (count);
}