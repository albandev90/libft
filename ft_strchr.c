char * strchr(const char *s, int c)
 {
    int i;
    i = 0;

    
    while (s[i])
    {
        if (s[i]==(char *)c)
            return (s+i);
        i++;
    }
    if (c =='\0')
        return (s+i);
    return (NULL);
 }