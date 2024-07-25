#include <unistd.h>
void number(int nb)
{
    char ch;
    if (nb > 9)
          number(nb /10);

    ch = nb % 10 + '0';
    write(1,&ch,1);
}
void    fizzb()
{
    int nb = 1;
    while (nb  <= 100)
    {
        if(nb % 3 == 0 && nb % 5 == 0)
            write(1,"fizzbuzz",9);
        else if(nb % 3 == 0)
            write(1,"fizz",5);
        else if( nb % 5 == 0)
            write(1,"buzz",5);
        else
            number(nb);
         write(1, "\n", 1);
        nb++;
    }    
}
int main()
{
   fizzb();
   return 0; 
}