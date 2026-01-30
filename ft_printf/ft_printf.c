#include "ft_printf.h"

int	check_pointer(void *p)
{
	int	count;

	count = 0;
	if (!p)
		count += ft_putstr("(nil)");
	else
	{
		count += ft_putstr("0x");
		count += ft_putnbr_hexa((unsigned long)p, 'p', 16);
	}
	return (count);
}

int	check_comp(const char *str, int i, va_list arg)
{
	int	count;

	count = 0;
	if (str[i] == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (str[i] == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (str[i] == 'i' || str[i] == 'd')
		count += ft_putnbr(va_arg(arg, int));
	else if (str[i] == 'u')
		count += ft_putnbr_hexa(va_arg(arg, unsigned int), str[i], 10);
	else if (str[i] == 'x' || str[i] == 'X')
		count += ft_putnbr_hexa(va_arg(arg, unsigned int), str[i], 16);
	else if (str[i] == 'p')
		count += check_pointer(va_arg(arg, void *));
	else if (str[i] == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, str);
	if (!str)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += check_comp(str, i, arg);
			va_end(arg);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}
