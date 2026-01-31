#include "../push_swap.h"

static size_t ft_get_real_len(char const *s, unsigned int start, size_t len)
{
    size_t s_len;
    size_t remaining_len;

    s_len = ft_strlen(s);
    if (start >= s_len)
        return (len);
    remaining_len = s_len - start;
    if (len < remaining_len)
        return (len);
    else 
        return (remaining_len);
}

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *new_string;
    size_t real_len;
    size_t i;

    if (!s)
        return (NULL);
    real_len = ft_get_real_len(s, start, len);
    new_string = (char *)malloc(sizeof(char) * (real_len + 1));
    if (!new_string)
        return (NULL);
    i = 0;
    while (i < real_len)
    {
        new_string[i] = s[start + i];
        i++;
    }
    new_string[i] = '\0';
    return (new_string);
}