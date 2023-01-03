/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:26:31 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/27 10:13:54 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)s1)[i] != ((unsigned char *)s2)[i]))
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	printf("%d\n", memcmp(s, sCpy, 4));
// 	printf("%d\n", ft_memcmp(s, sCpy, 4));
// 	// printf("%d\n", ft_memcmp(sCpy, s2, 0));
// 	// printf("%s:", str);
// 	// printf("\n%d",ft_memset('s'));
// }
