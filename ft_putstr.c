/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarlasc <amarlasc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:15:06 by amarlasc          #+#    #+#             */
/*   Updated: 2026/05/20 18:28:56 by amarlasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_putstr(char *str)
{
    int i;

    i = 0;
    if (!str)
        return (ft_putstr("NULL"));
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}