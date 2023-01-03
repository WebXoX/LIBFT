/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:37:09 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/27 17:14:42 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char s1, char const *se)
{
	while (*se)
	{
		if (*se == s1)
			return (1);
		se++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*news;
	size_t	x;
	int		a;

	if (!(s1 && set))
		return (NULL);
	while (*s1 != '\0')
	{
		if (check(s1[0], set) == 1)
			s1++;
		else
			break ;
	}
	x = ft_strlen(s1);
	while (0 < x)
	{
		a = check(s1[x - 1], set);
		if (a == 1)
			x--;
		else
			break ;
	}
	news = ft_substr(s1, 0, x);
	return (news);
}

// int	main(void)
// {
// 	char *c;
// 	char *v;
// 	char *x;

// 	v = "-/*-/*-*-/*//-/s-/*-/*-*-/*//";
// 	x = "/*-";
// 	c = ft_strtrim("   xxx   xxx", " x");

// 	printf("%s\n %d", c,strcmp(c, ""));
// }