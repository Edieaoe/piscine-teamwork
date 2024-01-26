/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:23:33 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/30 14:13:14 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in(char *str, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (*str == base[j])
			return (1);
		j++;
	}
	return (0);
}

int	word(char *str, char *charset)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (!(is_in(&str[i], charset))
			&& (is_in(&str[i + 1], charset) || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

int	*alpha_count(char *str, char *charset)
{
	int		*alpha;
	int		count;
	int		i;
	int		n;

	alpha = (int *)malloc(word(str, charset) * sizeof(int));
	i = 0;
	n = 0;
	while (n < word(str, charset))
	{
		if (str[i])
		{
			count = 0;
			while (is_in(&str[i], charset))
				i++;
			while (str[i] && !is_in(&str[i], charset))
			{
				count++;
				i++;
			}
			alpha[n] = count;
		}
		n++;
	}
	return (alpha);
}

int	insert(char *str, char *charset, char *str_split)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (is_in(&str[i], charset))
		i++;
	while (str[i])
	{
		if (!(is_in(&str[i], charset)))
			str_split[index++] = str[i++];
		else
		{
			while (is_in(&str[i], charset))
				i++;
			break ;
		}
	}
	str_split[index] = '\0';
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		n;
	int		i;

	result = (char **)malloc((word(str, charset) + 1) * sizeof(char *));
	if (!result)
		return (0);
	n = 0;
	i = 0;
	while (n < word(str, charset))
	{
		result[n] = (char *)
			malloc((alpha_count(str, charset)[n] + 1) * sizeof(char));
		if (!result[n])
			return (0);
		i += insert(&str[i], charset, result[n]);
		n++;
	}
	result[n] = NULL;
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	char	*str = "       ;  hello wo        ;         rld ;;  ";
// 	char	*charset = ";";
// 	char	**result;

// 	result = ft_split(str, charset);
// 	for (int i = 0; result[i]; i++)
// 	{
// 		printf("%s\n", result[i]);
// 	}
// 	free (result);
// }
