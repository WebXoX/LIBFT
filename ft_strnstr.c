/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:44:02 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/22 18:43:33 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len && len != 0)
	{
		if (*haystack == *needle)
		{
			i = 0;
			j = 0;
			while (needle[i] != '\0' && i <= (len))
			{
				if (haystack[i] != needle[i] || i == len)
					j = 1;
				i++;
			}
			if (j == 0)
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}

// int	main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	char	*bc;

// 	bc = ft_strnstr(haystack, "cd", 9);
// 	printf("%s", bc);
// }
