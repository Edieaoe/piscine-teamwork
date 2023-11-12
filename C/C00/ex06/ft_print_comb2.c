/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:21:37 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/18 19:08:29 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(int a, int b);

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a < b)
				printchar(a, b);
			b++;
		}
		a++;
	}
}

void	printchar(int a, int b)
{
	char	c;

	c = a / 10 + '0';
	write(1, &c, 1);
	c = a % 10 + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = b / 10 + '0';
	write(1, &c, 1);
	c = b % 10 + '0';
	write(1, &c, 1);
	if (a + b != 197)
		write(1, ", ", 2);
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
