/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:41:30 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/18 19:23:24 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		swap;
	int		i;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	test[6] = {1, 2, 3, 4, 5, 6};
// 	int	size = 6;

// 	ft_rev_int_tab(test, size);
// 	while (size-- > 0)
// 		printf("%d ", test[5-size]);
// 	return (0);
// }
