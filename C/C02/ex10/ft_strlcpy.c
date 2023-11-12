/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:07:30 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/21 13:17:03 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	lensrc;

	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	while (*src && (size - 1) > 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (lensrc);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	dest[] = "12345";
// 	char	dest2[] = "12345";
// 	char	*src;

// 	src = "abc";
// 	printf("%lu, %s\n", strlcpy(dest, src, 2), dest);
// 	printf("%u, %s\n", ft_strlcpy(dest2, src, 2), dest2);
// }
