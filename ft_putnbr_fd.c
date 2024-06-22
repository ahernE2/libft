/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 20:57:16 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/22 21:10:37 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	long	nb_long;
	size_t	digits;

	nb_long = nbr;
	digits = ft_getdigits(nb_long);
	if (nb_long < 0)
	{
		nb_long *= -1;
		ft_putchar_fd('-', fd);
		digits++;
	}
	while (digits--)
	{
		ft_putchar_fd(nb_long % 10 + '0', fd);
		nb_long /= 10;
	}
}
