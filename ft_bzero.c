/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:11:55 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/22 11:39:13 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)str = '\0';
		str++;
		i++;
	}
}

// int	main(void)
// {
// 	char	str[30];

// 	str[30] = "sdaf";
// 	printf("%s\n", str);
// 	// bzero(str, 2);
// 	ft_bzero(str, 1);
// 	printf("%s:", str);
// 	//printf("\n%d",ft_memset('s'));
// }
