/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:04:27 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/12 20:11:02 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int c)
{
	char	last_ocurrence;

	last_ocurrence = NULL;
	while (*s)
	{
		if (*s == (char) c)
			last_ocurrencer = s;
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return ((char) last_ocurrence);
}
