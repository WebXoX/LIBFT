/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:40:18 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/27 10:14:02 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ms;
	size_t	i;

	i = 0;
	ms = (char *)s;
	while (i < n)
	{
		if (ms[0] == (char)c)
			return (ms);
		i++;
		ms++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[30];

// 	str[30] = "as";
// 	// printf("%d\n", str[1]);
// 	printf("%s\n", memchr(str, ' ', 1));
// 	printf("%s\n", ft_memchr(str, ' ', 1));
// 	//printf("%s:", str);
// 	//printf("\n%d",ft_memset('s'));
// }
