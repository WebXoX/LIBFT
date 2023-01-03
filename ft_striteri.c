/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:10:37 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/25 13:26:00 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	x;

	x = 0;
	if (s && f)
	{
		i = ft_strlen(s);
		while (x < i)
		{
			f(x, s + x);
			x++;
		}
	}
}
