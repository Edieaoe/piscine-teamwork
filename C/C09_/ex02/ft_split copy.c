/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiliu <yiliu@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:50:56 by yiliu             #+#    #+#             */
/*   Updated: 2023/08/31 18:28:50 by yiliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_in(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	words_count(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	while (str[i])
	{
		if (!(is_in(str[i], charset))
			&& (is_in(str[i + 1], charset) || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

int	*alpha_count(char *str, char *charset)
{
	int	*alpha;
	int	words;

	words = words_count(str, charset);
	alpha = (int *)malloc(words * sizeof(int));
}

char	**ft_split(char *str, char *charset)
{

}

int main()
{
	char *str = "   hello world     ";
	char *charset = " ";


}
