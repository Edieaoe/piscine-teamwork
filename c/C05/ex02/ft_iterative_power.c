/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:17:33 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/26 18:03:55 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>
// int	main()
// {
// 	int	nb = 3;
// 	int power = 0;
// 	printf("%d", ft_iterative_power(nb, power));
// }
