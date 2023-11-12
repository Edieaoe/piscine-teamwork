#include <unistd.h>
#include <stdio.h>

void	recursive(int num)
{
	char	digit;

	digit = num % 10 + '0';
	if (num > 10)
	{
		printf("digit=%d, num=%d\n", digit, num);
		recursive(num / 10);
	}
	write(1, &digit, 1);
}

int	main()
{
	int	num = 432;
	recursive(num);
}
