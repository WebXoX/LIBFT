/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:50:45 by jperinch          #+#    #+#             */
/*   Updated: 2022/07/22 14:59:33 by jperinch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	chart;

	if (nb == -2147483648)
	{
		ft_putnbr_fd(nb / 10, fd);
		write(fd, &"8", 1);
	}
	else if (nb < 0)
	{
		write(fd, &"-", 1);
		ft_putnbr_fd(nb / (-1), fd);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr_fd(nb / 10, fd);
		chart = nb % 10 + '0';
		write(fd, &chart, 1);
	}
}
