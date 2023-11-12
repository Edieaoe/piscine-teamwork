/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:17:37 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/26 18:04:05 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

// #include <stdio.h>
// int	main()
// {
// 	int index = 5;
// 	printf("%d", ft_fibonacci(index));
// }
