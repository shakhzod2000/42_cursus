/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <sshermat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:09:09 by sshermat          #+#    #+#             */
/*   Updated: 2023/06/26 15:41:57 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list(args);
    va_start(args, format);
    unsigned int counter;

    counter = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 's')
            {
                while(*format)
                    write(1, &format[counter++], 1);
            }
        }
        else
            write(1, &format, 1);
        format++;
    }
    va_end(args);
    return (counter);
}

int main()
{
    ft_printf("%s\n", "Hello");
    return 0;
}