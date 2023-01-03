/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:24:27 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/22 11:47:14 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	s;

	j = 0;
	s = ft_strlen(src);
	i = ft_strlen(dst);
	k = i;
	if (dstsize == 0 || k > dstsize)
		return (s + dstsize);
	while (i < dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (!(dstsize == 0 || k > dstsize))
		dst[i] = '\0';
	return (k + s);
}

// int	main(void)
// {
//     char a[23] = "Th";
//     char *b = "a potentially long string";
//     size_t as = 23;
// 	printf("%zu %s", ft_strlcat(a,b,as), a);
// 	printf("\n%zu %s", strlcat(a,b,as), a);
// }
