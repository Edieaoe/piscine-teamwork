/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:09:03 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/31 22:06:20 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_positive_int(int nb);
int		plus(int a, int b);
int		minus(int a, int b);
int		multiply(int a, int b);
int		division(int a, int b);
int		mod(int a, int b);
int		ft_atoi(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	print_positive_int(nb);
}

void	print_positive_int(int nb)
{
	char	i;
	int		j;
	int		count;
	int		count_copy;
	char	digits[100];

	j = nb / 10;
	count = 1;
	while (j > 0)
	{
		j /= 10;
		count++;
	}
	count_copy = count;
	while (count > 0)
	{
		i = nb % 10 + '0';
		nb /= 10;
		digits[count-- - 1] = i;
	}
	write(1, digits, count_copy);
}

void	operate(int a, char c, int b)
{
	int	(*f[5])(int, int);
	int	result;

	f[0] = &plus;
	f[1] = &minus;
	f[2] = &multiply;
	f[3] = &division;
	f[4] = &mod;
	if (c == '+')
		result = f[0](a, b);
	if (c == '-')
		result = f[1](a, b);
	if (c == '*')
		result = f[2](a, b);
	if (c == '/')
		result = f[3](a, b);
	if (c == '%')
		result = f[4](a, b);
	ft_putnbr(result);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
			&& *argv[2] != '/' && *argv[2] != '%') || ft_strlen(argv[2]) != 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (*argv[2] == '/' && ft_atoi(argv[3]) == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (*argv[2] == '%' && ft_atoi(argv[3]) == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
	{
		operate(ft_atoi(argv[1]), *argv[2], ft_atoi(argv[3]));
		write(1, "\n", 1);
	}
	return (0);
}
