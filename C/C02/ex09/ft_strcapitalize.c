/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:06:12 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/19 18:51:42 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*i;

	i = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 'a' - 'A';
		str++;
	}
	str = i;
	if (*str >= 'a' && *str <= 'z')
		*str = *str + 'A' - 'a';
	str++;
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')
				|| (*str >= '0' && *str <= '9'))
			&& (*(str + 1) >= 'a' && *(str + 1) <= 'z'))
			*(str + 1) = *(str + 1) + 'A' - 'a';
		str++;
	}
	return (i);
}

// #include <stdio.h>
// int	main()
// {
// 	char	str[] = "salut, coSSIGUHSment tu vas ? 42mots
//quarante-deux; cinquante+et+un";
// 	printf("%s", ft_strcapitalize(str));

// }
