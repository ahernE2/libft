/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:31:24 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/11 22:51:39 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return (char *) s;
		s++;
	}
	if (*s == (char) c)
		return (char *) s;
	return (NULL);
}
