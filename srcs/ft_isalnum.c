/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:47:19 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/11 22:05:36 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int param);
int	ft_isdigit(int param);

int	ft_isalnum(char *str)
{
	while (*str)
	{
		if (!ft_isalpha(*str) || !ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
