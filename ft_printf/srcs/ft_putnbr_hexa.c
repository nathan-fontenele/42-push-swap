#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned long nb, char c, unsigned int dig)
{
	unsigned long	i;
	char			*hexa;

	hexa = NULL;
	i = 0;
	if (c == 'X')
		hexa = "0123456789ABCDEF";
	else if (c == 'x' || c == 'p')
		hexa = "0123456789abcdef";
	else if (c == 'u')
		hexa = "0123456789";
	if (nb > dig - 1)
		i += ft_putnbr_hexa(nb / dig, c, dig);
	i += ft_putchar(hexa[nb % dig]);
	return (i);
}
