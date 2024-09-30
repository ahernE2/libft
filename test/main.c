/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:40:21 by alejhern          #+#    #+#             */
/*   Updated: 2024/09/23 14:34:17 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (argv[1][0] == '1')
			test_1();
		if (argv[1][0] == '2')
			test_2();
	}
	return (0);
}
