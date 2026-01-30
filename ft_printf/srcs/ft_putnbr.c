#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (nb < 0)
	{
		nb = -nb;
		i += write(1, "-", 1);
	}
	if (nb > 9)
	{
		i += ft_putnbr(nb / 10);
	}
	nb = (nb % 10) + '0';
	i += write(1, &nb, 1);
	return (i);
}
