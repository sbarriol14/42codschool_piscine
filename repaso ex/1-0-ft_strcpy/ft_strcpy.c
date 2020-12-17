
int     ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strcpyy(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    int src_size;

    src_size = ft_strlen(src);
    j = ft_strlen(dest);
    while (i < src_size)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[i] = '\0';
    
}