/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:40:31 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/25 19:55:11 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_base(char *base)
{
	int	count;

	count = 0;
	while (*base++)
		count++;
	return (count);
}

int	valid_base(char *base)
{
	int	count;
	int	i;
	int	j;

	count = count_base(base);
	i = 0;
	j = 0;
	if (count > 1)
	{
		while (base[i])
		{
			if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
				return (0);
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j++])
					return (0);
			}
			i++;
		}
		return (1);
	}
	return (0);
}

int	is_negative(char *str)
{
	int	i;
	int	sign;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	start(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	return (i);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	count;
	int	result;

	i = start(str);
	count = count_base(base);
	result = 0;
	if (valid_base(base))
	{
		while (str[i])
		{
			if (!is_in(&str[i], base))
			{
				result *= is_negative(str);
				return (result);
			}
			j = 0;
			while (base[j])
			{
				if (str[i] == base[j])
					result = result * count + j;
				j++;
			}
			i++;
		}
	}
	return (0);
}

// int	main()
// {
// 	char *str;
// 	char *base;

// 	str = "  --+-12abmn1";
// 	base = "";
// 	printf("%d\n", ft_atoi_base(str, base));
// }
