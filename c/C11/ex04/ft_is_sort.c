/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:19:55 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/31 22:15:25 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	flag = 0;
	if (length < 3)
		return (1);
	while ((i + 1) < length)
	{
		if ((*f)(tab[i], tab[i + 1]) != 0)
		{
			flag = (*f)(tab[i], tab[i + 1]);
			j = i + 1;
			while ((j + 1) < length)
			{
				if (flag * (*f)(tab[i], tab[i + 1]) < 0)
					return (0);
				j++;
			}
		}
		i++;
	}
	return (1);
}

// int	ft_intcmp(int a, int b)
// {
// 	return (a - b);
// }

// #include <unistd.h>
// #include <stdio.h>
// int main()
// {
// 	int tab[] = {1, 2, 3, 3, 3};
// 	printf("%d\n", ft_is_sort(tab, 5, &ft_intcmp));
// }
