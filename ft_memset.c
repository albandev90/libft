 void * memset(void *b, int c, size_t len)
 {
    unsigned char *str;

    if(!b)
        return (NULL);
    str = (unsigned char *)b;
    while (len != 0)
    {
        *str = (unsigned char)c;
        str++;
        len--;
    }
    return (b);
 }