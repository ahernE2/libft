/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:42:38 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/11 22:07:59 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(char letter);

char	*ft_toupper(char *str)
{
	while (*str)
	{
		if (ft_islower(*str))
			*str -= 32;
		str++;
	}
	return (str);
}
