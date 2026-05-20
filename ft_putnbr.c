/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarlasc <amarlasc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:04:48 by amarlasc          #+#    #+#             */
/*   Updated: 2026/05/20 19:44:34 by amarlasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
    int     count;
    char    c;

    count = 0;
    if (n == -2147483648)
        return(write(1, "-2147483648", 11));
    if (n < 0)
    {
        count += write(1, "-", 1);
        n *= -1;
    }
    if (n >= 10)
        count += ft_putnbr(n / 10);
    c = (n % 10) + '0';
    count += write(1, &c, 1);
    return(count);
}

int main(void)
{
    int len;

    len = ft_putnbr(53);
	printf("\n%d\n", len);
    len = ft_putnbr(-233);
	printf("\n%d\n", len);
    return (0);
}