#include <stdio.h>
int ftatoi(char *str)
{
    int i = 0;
    int ch = 0;

    while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
    { 
        if(str[i + 1] == '-' || str[i + 1] == '+') 
            return 0;
        if (str[i] == '-')
            printf("-");
        i++;
        
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        ch *=10;
        ch = ch + str[i] - 48;
        i++;
    }
    return (ch);
}

#include <stdlib.h>
int main()
{
    char *str = "    -548ujyd";
    printf("%d \n", ftatoi(str));
    printf("%d", atoi(str));
    return 0;
}