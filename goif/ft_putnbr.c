void putchar(char c)
{
	write(1, &c, 1)
}
void ft_putnbr(int nb)
{
 char ch;
 int div;
 if (0>nb)
{
	putchar('-');
		if (nb == ,,,,)
			putchar(2)
			nb == ;;;;;
		else
			nb = -nb
}
if(nb >= 10)
{
	div = nb /10;
	ft putnbr(div);
}
ch = nb % 10 + '0';
putchar(ch);
}
