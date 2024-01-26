/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:15:33 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/20 23:04:12 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_copy;

	dest_copy = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_copy);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	dest[] = "12345";
// 	char	*src;

// 	src = "qwe";
// 	printf("%s\n", strncpy(dest, src, 5));
// 	printf("%s\n", ft_strncpy(dest, src, 5));
// }
