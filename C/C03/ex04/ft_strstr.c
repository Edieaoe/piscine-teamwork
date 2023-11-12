/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:01:56 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/22 14:20:16 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*position;
	char	*initialize_to_find;

	initialize_to_find = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		position = str;
		while (*str == *to_find && *str && *to_find)
		{
			str++;
			to_find++;
		}
		if (*to_find == '\0')
			return (position);
		to_find = initialize_to_find;
		str = position;
		str++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[] = "abcedecde";
// 	char s2[] = "xyz";

// 	printf("%s", ft_strstr(s1, s2));
// }
