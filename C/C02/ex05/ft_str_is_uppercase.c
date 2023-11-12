/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:15:25 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/19 18:47:41 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "ABC";
// 	str2 = "abcAB";
// 	printf ("%d", ft_str_is_uppercase(str1));
// }
