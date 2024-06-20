/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:27:55 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/21 01:01:36 by alejhern         ###   ########.fr       */
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

static char	*ft_construct(char *str, int nb, size_t index)
{
	int		aux_nb;
	int		mult;

	while (nb > 9)
	{
		aux_nb = nb;
		mult = 1;
		while (aux_nb > 9)
		{
			aux_nb /= 10;
			mult *= 10;
		}
		str[index] = (aux_nb % 10) + '0';
		index++;
		nb -= aux_nb * mult;
	}
	if (nb >= 0)
		str[index] = (nb % 10) + '0';
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*str;
	size_t	index;

	str = (char *)ft_calloc(ft_getdigits(nb) + 1, sizeof(char));
	if (!str)
		return (NULL);
	index = 0;
	if (nb < 0)
	{
		str[index] = '-';
		nb *= -1;
		index++;
	}
	ft_construct(str, nb, index);
	return (str);
}
