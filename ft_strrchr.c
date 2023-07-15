char * strrchr(const char *s, int c)
 {
    int i;
    i = 0;
    char * j;
    
    while (s[i])
    {
        if (s[i]==(char *)c)
            j = s + i;
        i++;
    }
    if (c =='\0')
        j = s + i;
    return (j);
 }   


// "hello world" 