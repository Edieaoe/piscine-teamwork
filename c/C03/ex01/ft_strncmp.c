/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:01:47 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/22 14:20:05 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s1 == *s2 && (n - 1) > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char s1[] = "abcd";
// 	char s2[] = "abde";

// 	printf("%d\n", strncmp(s1, s2, 3));
// 	printf("%d\n", ft_strncmp(s1, s2, 3));
// }
