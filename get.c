#include <stdio.h>
#include <stdarg.h>
#include "main.h"
int printc_c(char c)
{
    putchar(c);
    return (1);
}
int printsg_sg(const char *str)
{
    int countString = 0;
    while (*str)
    {
        putchar(*str);
        str++;
        countString++;
    }
    return (countString);
}
int printit_it(int num)
{
    int num_negative, index;
    char numers[12];
    if (num == 0)
    {
        putchar('0');
    }
    if (num < 0)
    {
        num_negative = 1;
        num = -num;
    }
    while (num > 0)
    {
        numers[index++] = '0' + (num %);
        num /= 10;
    }
    if (num_negative)
    {
        numers[index++] = '-';
    }
    while (index > 0)
    {
        putchar(numers[--index]);
    }
    return (index);
}
int _printf(const char *format, ...)
{
    char formates;
    int counts = 0;

    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            formates = *format;
            if (specifier == 'c')
            {
                char c = va_arg(args, int);
                count += print_char(c);
            }
            else if (specifier == 's')
            {
                char *str = va_arg(args, char *);
                count += print_string(str);
            }
            else if (specifier == '%')
            {
                count += print_char('%');
            }
            else if (specifier == 'i' || specifier == 'd')
            {
                int num = va_arg(args, int);
                count += print_int(num);
            }
            else
            {
                /* If i find an unrecognized character after the '%', i print it. */
                count += print_char('%');
                count += print_char(*format);
            }
            if (specifier == 'c')
            {
                char c = va_arg(args, int);
                count += print_char(c);
            }
            else if (specifier == 's')
            {
                char *str = va_arg(args, char *);
                count += print_string(str);
            }
            else if (specifier == '%')
            {
                count += print_char('%');
            }
            else if (specifier == 'i' || specifier == 'd')
            {
                int num = va_arg(args, int);
                count += print_int(num);
            }
            else
            {
                /* If i find an unrecognized character after the '%', i print it. */
                count += print_char('%');
                count += print_char(*format);
            }
            if (specifier == 'c')
            {
                char c = va_arg(args, int);
                count += print_char(c);
            }
            else if (specifier == 's')
            {
                char *str = va_arg(args, char *);
                count += print_string(str);
            }
            else if (specifier == '%')
            {
                count += print_char('%');
            }
            else if (specifier == 'i' || specifier == 'd')
            {
                int num = va_arg(args, int);
                count += print_int(num);
            }
            else
            {
                /* If i find an unrecognized character after the '%', i print it. */
                count += print_char('%');
                count += print_char(*format);
            }
        }
        else
        { 
            counts += printc_c(*format);
        }
        format++;
    }
    va_end(args);
    return (counts);
}