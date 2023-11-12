/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:19:49 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/31 22:14:55 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i++]) != 0)
			return (1);
	}
	return (0);
}

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// #include <unistd.h>
// #include <stdio.h>
// int main()
// {
// 	char *tab[] = {"asd", "", "", NULL};
// 	printf("%d\n", ft_any(tab, &ft_strlen));
// }
