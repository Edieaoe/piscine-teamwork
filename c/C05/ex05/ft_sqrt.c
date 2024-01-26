/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:17:40 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/26 18:04:12 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 0;
	if (nb >= 0)
	{
		while (root <= 46340)
		{
			if (root * root == nb)
				return (root);
			root++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	int nb = 2147395600;
// 	printf("%d", ft_sqrt(nb));
// }
