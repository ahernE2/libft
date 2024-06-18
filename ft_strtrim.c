/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:07:46 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/19 01:19:35 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char *s1, char *set)
{
	char	*trim;
	char	*start_trim;
	size_t	set_len;

	if (!s1 || !set)
		return (NULL);
	set_len = ft_strlen(set);
	trim = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	start_trim = trim;
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
		{
			*trim = *s1;
			trim++;
		}
		s1++;
	}
	*trim = '\0';
	return (start_trim);
}
