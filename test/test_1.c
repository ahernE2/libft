/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:35:54 by alejhern          #+#    #+#             */
/*   Updated: 2024/07/01 22:06:40 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// Supongo que tus funciones ft_* están correctamente definidas e incluidas

void	test_1(void)
{
	// Test isalpha
	test_isalpha('A');
	test_isalpha('z');
	test_isalpha('5');
	test_isalpha('!');

	// Test isdigit
	test_isdigit('0');
	test_isdigit('9');
	test_isdigit('a');
	test_isdigit(' ');

	// Test isalnum
	test_isalnum('A');
	test_isalnum('5');
	test_isalnum(' ');
	test_isalnum('!');

	// Test isascii
	test_isascii(65);
	test_isascii(128);
	test_isascii(255);
	test_isascii(-1);

	// Test toupper
	test_toupper('a');
	test_toupper('A');
	test_toupper('1');
	test_toupper('!');

	// Test tolower
	test_tolower('A');
	test_tolower('a');
	test_tolower('1');
	test_tolower('!');

	// Test isprint
	test_isprint(' ');
	test_isprint('A');
	test_isprint(127);
	test_isprint(128);

	// Test strlen
	test_strlen("");
	test_strlen("Hello");
	test_strlen("A longer string for testing.");

	// Test strchr
	test_strchr("Hello, world!", 'o');
	test_strchr("Hello, world!", 'z');
	test_strchr("", 'a');

	// Test strrchr
	test_strrchr("Hello, world!", 'o');
	test_strrchr("Hello, world!", 'z');
	test_strrchr("", 'a');

	// Test strlcpy
	test_strlcpy((char[20]){}, "Hello, world!", 5);
	test_strlcpy((char[20]){}, "Short", 10);

	// Test strlcat
	test_strlcat((char[20]){"Hello"}, " world!", 20);
	test_strlcat((char[20]){"Hello"}, " more text", 5);

	// Test strnstr
	test_strnstr("Hello, world!", "world", 12);
	test_strnstr("Hello, world!", "test", 12);

	// Test bzero
	test_bzero((char[10]){"123456789"}, 5);

	// Test memset
	test_memset((char[10]){"123456789"}, 'A', 5);

	// Test memcpy
	test_memcpy((char[10]){}, "Hello", 6);

	// Test memchr
	test_memchr("Hello, world!", 'o', 12);
	test_memchr("Hello, world!", 'z', 12);

	// Test memcmp
	test_memcmp("Hello", "Hello", 5);
	test_memcmp("Hello", "World", 5);

	// Test memmove
	test_memmove((char[20]){"Hello, world!"} + 7, (char[20]){"Hello, world!"}, 6);

	// Test atoi
	test_atoi("123");
	test_atoi("-456");
	test_atoi("0");

	// Test calloc
	test_calloc(5, sizeof(int));

	// Test strdup
	test_strdup("Hello, world!");
	test_strdup("");
}
