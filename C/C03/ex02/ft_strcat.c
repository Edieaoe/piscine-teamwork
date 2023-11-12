/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:01:50 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/22 14:20:08 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char dest1[10] = "abc";
// 	char dest2[10] = "abc";
// 	char src[] = "def";

// 	printf("%s\n", strcat(dest1, src));
// 	printf("%s\n", ft_strcat(dest2, src));
// }
