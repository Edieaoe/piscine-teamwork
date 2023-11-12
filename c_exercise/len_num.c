int	count_base(char *base)
{
	int	count;

	count = 0;
	while (*base++)
		count++;
	return (count);
}

int	len_int(long int nbr, char *base)
{
	int	count;
	int	len;
	int	flag;

	len = 1;
	flag = 0;
	count = count_base(base);
	if (nbr < 0)
	{
		nbr *= -1;
		flag = 1;
	}
	if (nbr / count == 0)
		return (1);
	if (nbr / count != 0)
		len += len_int(nbr / count, base);
	return (len + flag);
}

#include <stdio.h>
int	main()
{
	int	nbr = -12345;
	char *base = "0123456789";
	printf("%d", len_int(nbr, base));
}
