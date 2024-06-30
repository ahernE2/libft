/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 02:11:35 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/18 02:53:12 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*get_color_test(void *expected, void *result, size_t n)
{
	// Secuencias de escape ANSI para colores
	const char *red = "\033[1;31m";
	const char *green = "\033[1;32m";

	if (memcmp(expected, resul, n) == 0)
		return (green);
	else
		return (red);
}
