/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:03:04 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/19 18:47:00 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
// 	str2 = "abc12";
// 	printf ("%d", ft_str_is_alpha(str2));
// }
