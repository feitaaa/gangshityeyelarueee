#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int size;
    int i;
    int *tab;

    i = 0;
    if (min >= max)
        return NULL;
    size = max - min;
    tab = malloc(sizeof(int) * (size));
    if (!tab)
        return NULL;
    while ( i < size) 
    {
        tab[i] = min;
        i++;
        min++;
    } 
    return (tab);  
}
int main()
{
    int i;
    int *tab = ft_range(10,30);

    i = 0;
    while(i < 20)
    {
        printf("%d ", tab[i]);
        i++;
    }
    return 0;
}