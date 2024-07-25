#include <stdio.h>
void ft_swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b  = t;

}
int main()
{
	int a = 5;
	int b = 4;
	ft_swap(&a, &b);
	return 0;
}
