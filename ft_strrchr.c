/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:52:08 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/22 11:42:49 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ms;
	int		j;

	j = ft_strlen(s);
	ms = (char *)s;
	while (j >= 0)
	{
		if (*(ms + j) == (unsigned char)c)
		{
			return (ms + j);
		}
		j--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "tripouille";
// 	// printf("%d\n", str[1]);
// 	printf("%s\n", strrchr(str, 'z'));
// 	printf("%s\n", ft_strrchr(str, 'z'));
// 	//printf("%s:", str);
// 	//printf("\n%d",ft_memset('s'));
// }
