/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:21:15 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/19 18:48:03 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*i;

	i = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str + 'A' - 'a';
		str++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char	str1[] = "abC";

// 	printf("%s", ft_strupcase(str1));
// }
