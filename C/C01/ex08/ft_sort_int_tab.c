/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:28:05 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/18 19:23:31 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	*tab_sort;

	i = 1;
	while (size-- > 0)
	{
		if (tab[size - 1] < tab[size - 1 - i])
			swap = tab[size - 1];
		else
			swap = tab[size - 1 - i];
		tab_sort[0] = swap;

	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	*test[6] = {3, 2, 4, 5, 1, 6};
// 	int	size = 6;
// 	ft_sort_int_tab(test, size);
// }
