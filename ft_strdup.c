/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:52:12 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/27 10:33:40 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	int		i;
	char	*c;

	len = ft_strlen(s);
	i = 0;
	c = malloc(len * sizeof(char) + 1);
	if (!c)
		return (NULL);
	while (s[i] != '\0')
	{
		c[i] = s[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

// int	main(void)
// {
// 	char * s = ft_strdup((char*)"");
// 	// printf("%s:\n",ft_strdup((char*)"coucou"));
// 	printf("%d:\n",strcmp(s, ""));

// 	// printf("%s:\n", strdup((char*)"coucou"));
// }