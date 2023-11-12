/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:03:58 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/29 22:47:53 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	while (argv[argc - 1])
	{
		if (argc - 1 == 0)
			return (0);
		j = 0;
		while (argv[argc - 1][j])
		{
			write(1, &argv[argc - 1][j++], 1);
		}
		write(1, "\n", 1);
		argc--;
	}
}
