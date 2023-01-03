/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:20:06 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/22 15:17:36 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	size_t	x;
	size_t	y;

	if (!(s1 && s2))
		return (NULL);
	y = 0;
	x = 0;
	news = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!news)
		return (NULL);
	while (x < ft_strlen(s1))
	{
		news[x] = s1[x];
		x++;
	}
	while (y < ft_strlen(s2))
	{
		news[x] = s2[y];
		y++;
		x++;
	}
	news[x] = '\0';
	return (news);
}
// int	main(void)
// {
// 	char *c;
//     char *v;
// char *x;
//     v = "the";
//     x= " boot";
//     c = ft_strjoin(v ,x);

//     printf(":%d:\n",c[8]);

// }