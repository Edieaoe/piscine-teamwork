/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:01:59 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/22 14:10:23 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	len_dest;
	int	j;

	len_dest = len(dest);
	j = 0;
	if ((int)size <= len_dest)
		return ((int)size + len(src));
	else
	{
		while (src[j] != '\0' && ((int)size - len_dest - 1) > j)
		{
			dest[len_dest + j] = src[j];
			j++;
		}
		dest[len_dest + j] = '\0';
	}
	return (len_dest + len(src));
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char dest1[10] = "abc";
// 	char dest2[10] = "abc";
// 	char src[] = "def";

// 	printf("%lu, %s\n", strlcat(dest1, src, 8), dest1);
// 	printf("%u, %s\n", ft_strlcat(dest2, src, 8), dest2);
// }
