/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:40:07 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/22 11:49:02 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*mdest;
	char	*msrc;
	size_t	i;

	mdest = (char *)dest;
	msrc = (char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		mdest[i] = (unsigned char)msrc[i];
		i++;
	}
	return (mdest);
}

// int	main(void)
// {
// 	char	a[40]= "asdf";
// 	char	b[20] = "asdf";
// 	// memcpy(a,b,5);
// 	ft_memcpy(a, b, 7);
// 	printf("\n%s", a);
// }
