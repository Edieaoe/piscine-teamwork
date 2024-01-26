/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:23:14 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/29 19:53:16 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*digit;
	int	i;

	if (min >= max)
		return (NULL);
	else
	{
		digit = (int *)malloc((max - min + 1) * sizeof(int));
		if (digit == NULL)
			return (NULL);
		i = 0;
		while (max > min)
			digit[i++] = min++;
	}
	return (digit);
}

// #include <stdio.h>
// int	main()
// {
// 	int	*digit;

// 	digit = ft_range(2147483647, 2147483647);
// 	if (digit != NULL)
// 	{
// 		for (int i = 0; i < 3; i++)
// 		{
// 			printf("%d\n", digit[i]);
// 		}
// 		free(digit);
// 	}
// 	return (0);
// }
