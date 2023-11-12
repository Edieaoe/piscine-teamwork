/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:09:55 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/19 18:47:28 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
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

// 	str1 = "abc";
// 	str2 = "abcAB";
// 	printf ("%d", ft_str_is_lowercase(str1));
// }
