/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:20:07 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/22 14:12:12 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		x;
	char	*str;

	if (!s || !f)
		return (NULL);
	x = 0;
	i = ft_strlen(s);
	str = malloc(i * sizeof(char) + 1);
	if (!str || !s || !f)
		return (NULL);
	while (x < i)
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
