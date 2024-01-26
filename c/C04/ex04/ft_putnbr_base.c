/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:40:29 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/25 20:02:21 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	count_base(char *base)
{
	int	count;

	count = 0;
	while (*base++)
		count++;
	return (count);
}

int	valid_base(char *base)
{
	int	count;
	int	i;
	int	j;

	count = count_base(base);
	i = 0;
	if (count > 1)
	{
		while (base[i])
		{
			if (base[i] == '+' || base[i] == '-')
				return (0);
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j++])
					return (0);
			}
			i++;
		}
		return (1);
	}
	return (0);
}

void	putnbr(long int nbr, char *base)
{
	int		count;
	int		digit;

	count = count_base(base);
	digit = nbr % count;
	if (nbr / count != 0)
		putnbr(nbr / count, base);
	write (1, &(base[digit]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			count;
	long int	long_nbr;

	long_nbr = nbr;
	count = count_base(base);
	if (long_nbr < 0)
	{
		write(1, "-", 1);
		long_nbr *= -1;
	}
	if (valid_base(base))
		putnbr(long_nbr, base);
}

// int	main()
// {
// 	int		nbr = -2147483648;
// 	char	*base;

// 	base = "01";
// 	ft_putnbr_base(nbr, base);
// }
