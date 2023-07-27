#include <stdio.h>

void ft_function(int i, ...)
{
	va_list va;

	va_start(va, i);
	printf("%d\n", va_arg(va, int));
	printf("%c\n", va_arg(va, char));
	printf("%s\n", va_arg(va, char *));

}

int	main(void)
{
	ft_function(3, 4, 'h', "bia");
}
