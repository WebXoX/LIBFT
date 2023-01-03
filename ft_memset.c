/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:09:19 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/22 11:48:46 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
// int	main(void)
// {
// 	int str[30] = {1, 2};
// 	printf("%d\n", str[1]);
// 	// memset(str,'a', 39);
// 	ft_memset(str, 'a', 39);
// 	printf("%d:", str[9]);
// 	//printf("\n%d",ft_memset('s'));
// }