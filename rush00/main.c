/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:10:36 by lmaruyam          #+#    #+#             */
/*   Updated: 2024/01/29 20:14:55 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		stringtoint(char *str);
int		chartoint(char c);
void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = stringtoint(argv[1]);
	y = stringtoint(argv[2]);
	if (argc == 3)
	{
		if (x == -1 || y == -1)
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
	rush(x, y);
	return (0);
}

int	chartoint(char c)
{
	return (c - '0');
}

int	stringtoint(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + chartoint(str[i]);
		}
		else
		{
			return (-1);
		}
		i++;
	}
	return (result);
}
