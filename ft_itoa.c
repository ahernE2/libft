/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:27:55 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/21 19:07:05 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_getdigits(int nb)
{
	size_t	len;

	len = 1;
	if (nb < 0)
		len++;
	while (nb > 9)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	long	nb_long;
	size_t	digits;
	char	*str;

	nb_long = nb;
	digits = ft_getdigits(nb_long);
	if (nb_long < 0)
	{
		nb_long *= -1;
		digits++;
	}
	str = (char *)ft_calloc(digits + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (digits--)
	{
		str[digits] = nb_long % 10 + '0';
		nb_long /= 10;
	}
	if (nb < 0)
		str[0] = '-';
	return (str);
}
