/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:23:20 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/30 21:38:45 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_copy;

	dest_copy = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_copy);
}

int	full_length(int size, char **strs, char *sep)
{
	int	i;
	int	len_strs;
	int	len_sep;
	int	full_length;

	len_strs = 0;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
		len_strs += ft_strlen(strs[i++]);
	len_sep = ft_strlen(sep);
	full_length = len_strs + (i - 1) * len_sep;
	return (full_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	char	*string_ad;
	int		i;

	string = (char *)malloc((full_length(size, strs, sep) + 1) * sizeof(char));
	if (!string)
		return (0);
	string_ad = string;
	if (size == 0)
		return (string_ad);
	i = 0;
	while (i < size)
	{
		ft_strcpy(string, strs[i]);
		string += ft_strlen(strs[i]);
		if (i < (size - 1))
		{
			ft_strcpy(string, sep);
			string += ft_strlen(sep);
		}
		i++;
	}
	*string = '\0';
	return (string_ad);
}

// #include <stdio.h>
// int	main()
// {
// 	int		size;
// 	char	*strs[] = {"", "I", "am", "so", "happy"};
// 	char	*sep;
// 	char	*result;

// 	sep = "           ";
// 	size = 5;
// 	result = ft_strjoin(size, strs, sep);
// 	printf("%s\n", result);
// 	free(result);

// 	return (0);
// }
