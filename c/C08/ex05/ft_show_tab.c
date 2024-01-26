/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:13:29 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/30 18:12:58 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				print_positive_int(int nb);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}

// int	main(int ac, char **av)
// {
// 	t_stock_str	*result;
// 	result = ft_strs_to_tab(ac, av);
// 	ft_show_tab(result);
// }
