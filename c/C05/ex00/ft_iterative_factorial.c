/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:17:27 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/26 18:03:42 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb >= 1)
		result *= nb--;
	return (result);
}

// #include <stdio.h>
// int	main()
// {
// 	int	nb = 5;
// 	printf("%d", ft_iterative_factorial(nb));
// }
