/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:52:48 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/20 22:10:00 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			write(1, "\\", 1);
			write(1, &("0123456789abcdef"[(unsigned char)*str / 16]), 1);
			write(1, &("0123456789abcdef"[(unsigned char)*str % 16]), 1);
			str++;
		}
		write(1, str++, 1);
	}
}

// int main()
// {
// 	char	str[] = "Coucou\ntu vas bien ?";

// 	ft_putstr_non_printable(str);
// 	return(0);
// }
