/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:16:09 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/27 10:32:17 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*mdest;
	char	*msrc;
	size_t	x;

	x = 0;
	mdest = (char *)dest;
	msrc = (char *)src;
	if (!mdest && !msrc)
		return (NULL);
	while (n > 0 && mdest > msrc)
	{
		((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
		n--;
	}
	while (x < n && mdest <= msrc)
	{
		((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
		x++;
	}
	return (dest);
}
