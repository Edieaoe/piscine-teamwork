/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:17:17 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/19 18:47:53 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	char	str[]= "sdafasdfag";

// 	str[2] = 11;
// 	printf ("%d", ft_str_is_printable(str));
// }
