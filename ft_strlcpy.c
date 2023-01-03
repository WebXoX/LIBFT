/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:22:12 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/28 09:53:33 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	s;

	j = 0;
	s = ft_strlen(src);
	i = ft_strlen(dst);
	if (!dstsize)
		return (s);
	while (j < dstsize - 1 && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	if (dstsize > 0)
		dst[j] = '\0';
	return (s);
}

// int	main(void)
// {
// 	char src[] = "coucou";
// 	char dest[10]; memset(dest, 'A', 10);
// 	size_t	as;
// 	as = 4;printf(" \n%c",  dest[9]);
// 	// printf("%zu %s", ft_strlcpy(dest, src, -1), dest);
// 	printf("%d", strcmp(src, dest));memset(dest, 'A', 10);

// 	// printf("\n%zu %s", strlcpy(dest, src, -1), dest);
// }
