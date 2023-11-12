/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:01:43 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/22 14:20:00 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s1[] = "abc";
// 	char s2[] = "sdf";

// 	printf("%d\n", strcmp(s1, s2));
// 	printf("%d\n", ft_strcmp(s1, s2));
// }
