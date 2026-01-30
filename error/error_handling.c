int ft_valid_arg(char *s)
{
    int i = 0;
    int has_digit = 0;

    if (!s || s[0] == '\0')
        return 0;

    while (s[i])
    {
        while (s[i] == ' ' || s[i] == '\t')
            i++;

        if (s[i] == '\0')
            break;

        if (s[i] == '+' || s[i] == '-')
            i++;

        if (s[i] < '0' || s[i] > '9')
            return 0;

        has_digit = 1;

        while (s[i] >= '0' && s[i] <= '9')
            i++;

        if (s[i] && s[i] != ' ' && s[i] != '\t')
            return 0;
    }

    return has_digit;
}

