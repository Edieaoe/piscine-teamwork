/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:05:09 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/19 18:48:18 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*i;

	i = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 'a' - 'A';
		str++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char	str1[] = "abC";

// 	printf("%s", ft_strlowcase(str1));
// }
