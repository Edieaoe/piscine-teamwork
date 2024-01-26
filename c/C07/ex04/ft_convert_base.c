/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:23:23 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/30 17:00:47 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in(char *str, char *base);

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

long int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			j;
	long int	result;

	i = start(str);
	result = 0;
	if (!valid_base(base))
		return (0);
	while (str[i] && is_in(&str[i], base))
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				result = result * count_base(base) + j;
			j++;
		}
		i++;
	}
	result *= is_negative(str);
	return (result);
}
