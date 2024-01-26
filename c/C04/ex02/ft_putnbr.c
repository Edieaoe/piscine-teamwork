/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:22:02 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/25 19:42:06 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	print_positive_int(int nb);

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

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	return (0);
// }
