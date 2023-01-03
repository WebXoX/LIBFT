/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:57:51 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/29 11:23:56 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	c = malloc(count * size);
	if (!c)
		return (NULL);
	ft_bzero(c, count * size);
	return (c);
}
// int	main(void)
// {
// 	// char *c;
//     // char *v;

//     // c = (char *)ft_calloc(1 , 0);
//     // v = (char *)calloc(1 , 0);

//     // printf("hi%d\n",c[1000]);
//     // printf("hi%c\n",v[10000]);

// }