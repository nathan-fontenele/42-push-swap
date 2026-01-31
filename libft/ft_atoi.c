static int	ft_convert_and_check(const char *str, int i, int sign)
{
	long long sum;

	sum = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	sum = sum * sign;
	if (sum > 2147483647)
		return (-1);
	if (sum < -2147483648)
        return (0);
    return ((int)sum);
}

int ft_atoi(const char *str)
{
    int i;
    int sign;

    i = 0;
    sign = 1;
    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
        return (0);
    return (ft_convert_and_check(str, i, sign));
}