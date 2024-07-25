#include <unistd.h>
void putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb(void)
{
	int a ='0';
	int b ;
	int c;

	while (a <= '7')
	{	
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7')
					write(1,", ", 2);
				if (a == '7')
					write(1,"\n The end", 9);
				c++;
			}
			b++;
		}
		a++;
	}
}
int main()
{
	ft_print_comb();
	return 0;
}

