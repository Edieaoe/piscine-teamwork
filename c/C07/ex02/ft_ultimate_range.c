/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:23:18 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/29 19:55:15 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	else
	{
		i = 0;
		size = max - min;
		while (max > min)
			range[0][i++] = min++;
		return (size);
	}
}

// #include <stdio.h>
// int	main()
// {
// 	int max = -2147483647;
// 	int min = -2147483648;
// 	int *range = NULL;
// 	int a = ft_ultimate_range(&range, min, max);
// 	printf("return: %d\n", a);
// 	if (range != NULL)
// 	{
// 		for (int i = 0;i<a;i++)
// 			printf("%d\n", range[i]);
// 		free (range);
// 	}
// 	return (0);
// }
