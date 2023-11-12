/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:35:07 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/18 19:05:17 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n < 0)
		sign = 'N';
	else
		sign = 'P';
	write(1, &sign, 1);
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	num1 = -5;
// 	num2 = 10;
// 	ft_is_negative(num1);
// 	ft_is_negative(num2);
// 	return (0);
// }
