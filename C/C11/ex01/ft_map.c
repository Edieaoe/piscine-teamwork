/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:19:47 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/31 22:14:41 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*array;
	int	i;

	array = (int *)malloc(length * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

// #include <stdio.h>
// int	ft_iterative_factorial(int nb)
// {
// 	int	result;

// 	if (nb < 0)
// 		return (0);
// 	result = 1;
// 	while (nb >= 1)
// 		result *= nb--;
// 	return (result);
// }

// int main()
// {
// 	int	tab[] = {1, 2, 3};
// 	int	*array;

// 	array = ft_map(tab, 3, &ft_iterative_factorial);
// 	for (int i = 0; i<3; i++)
// 		printf("%d\n", array[i]);
// }
