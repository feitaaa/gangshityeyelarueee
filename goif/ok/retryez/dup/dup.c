#include <stdlib.h>
#include <stdio.h>
char *fstrcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }lscdcd
    dest[i] = '\0';
    return dest;
}
char *ft_strdup(char *src)
{
    char *dest;
    int i;

    i = 0;
    while(src[i])
        i++;
    dest = malloc(sizeof(char) * (i + 1));
    if(!dest)
     return NULL;
     fstrcpy(dest, src);
     return dest;

}
int main()
{
    printf("%s", ft_strdup("ewaaa"));
    return 0;
}