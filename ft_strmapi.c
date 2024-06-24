/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:16:01 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/24 19:16:48 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	size_t			len_s;
	char			*mapi;
	unsigned int	index;

	len_s = ft_strlen(s);
	mapi = (char *)ft_calloc(len_s + 1, sizeof(char));
	if (!mapi)
		return (NULL);
	index = 0;
	while (s[index])
	{
		mapi[index] = f(index, s[index]);
		index++;
	}
	return (mapi);
}
