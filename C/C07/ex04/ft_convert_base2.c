/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:23:25 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/30 17:05:36 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			count_base(char *base);
int			valid_base(char *base);
long int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
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

int	len_int(long int nbr, char *base)
{
	int	count;
	int	len;
	int	flag;

	len = 1;
	flag = 0;
	if (!valid_base(base))
		return (0);
	count = count_base(base);
	if (nbr < 0)
	{
		nbr *= -1;
		flag = 1;
	}
	if (nbr / count == 0)
		return (1 + flag);
	if (nbr / count != 0)
		len += len_int(nbr / count, base);
	return (len + flag);
}

char	*ft_putnbr_base(long int nbr, char *base, char *result, int i)
{
	int	count;
	int	len;

	len = len_int(nbr, base);
	count = count_base(base);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	if (nbr / count != 0)
		ft_putnbr_base(nbr / count, base, result, i - 1);
	result[i] = base[nbr % count];
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*result;
	long int	inter;

	if (!valid_base(base_from))
		return (0);
	inter = ft_atoi_base(nbr, base_from);
	result = (char *)malloc((len_int(inter, base_to) + 1) * sizeof(char));
	if (!result)
		return (0);
	if (!valid_base(base_to))
		return (0);
	ft_putnbr_base(inter, base_to, result, len_int(inter, base_to) - 1);
	result[len_int(inter, base_to)] = '\0';
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	char	*nbr = "      +++--2147a";
// 	char	*base_from = "0123456789";
// 	char	*base_to = "0123456789abcdef";
// 	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
// }
