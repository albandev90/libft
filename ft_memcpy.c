void *memcpy(void * dst, const void * src, size_t n)
{
    char *d;
    char *s;

    if (!dst && !src)
        return (NULL);
    d = (char *)dst;
    s = (char *)src;
    while (n)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return (dst);
}
