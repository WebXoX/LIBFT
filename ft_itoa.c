/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:24:21 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/27 10:29:37 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(int n)
{
	int	count;

	count = 0;
	if (n == INT_MIN)
		n++;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_putnbrs(int nb, char *chart, int i)
{
	if (nb == -2147483648)
	{
		ft_putnbrs(nb / 10, chart, i - 1);
		chart[i] = '8';
	}
	else if (nb < 0)
	{
		chart[0] = (char) '-';
		ft_putnbrs(nb / (-1), chart, i);
	}
	else
	{
		if (nb >= 10)
		{
			ft_putnbrs(nb / 10, chart, i - 1);
		}
		chart[i] = nb % 10 + '0';
	}
}

char	*ft_itoa(int n)
{
	char	*news;
	int		i;

	i = checker(n);
	news = malloc(i * sizeof(char) + 1);
	if (!news)
		return (NULL);
	news[i] = '\0';
	i--;
	ft_putnbrs(n, news, i);
	return (news);
}

// int	main(void)
//  {
// 	int a = 123;
// 	printf("%s\n", ft_itoa(2147483647));
// 	// printf("%d\n", atoi(a));
// }