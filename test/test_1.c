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

void	test_1(void)
{
	// Alpha Tests
	print_title("Alpha Tests");
	test_isalpha('A');
	test_isalpha('z');
	test_isalpha('5');
	test_isalpha('!');

	// Digit Tests
	print_title("Digit Tests");
	test_isdigit('0');
	test_isdigit('9');
	test_isdigit('a');
	test_isdigit(' ');

	// Alphanumeric Tests
	print_title("Alphanumeric Tests");
	test_isalnum('A');
	test_isalnum('5');
	test_isalnum(' ');
	test_isalnum('!');

	// ASCII Tests
	print_title("ASCII Tests");
	test_isascii(65);
	test_isascii(128);
	test_isascii(255);
	test_isascii(-1);

	// Uppercase Conversion Tests
	print_title("Uppercase Conversion Tests");
	test_toupper('a');
	test_toupper('A');
	test_toupper('1');
	test_toupper('!');

	// Lowercase Conversion Tests
	print_title("Lowercase Conversion Tests");
	test_tolower('A');
	test_tolower('a');
	test_tolower('1');
	test_tolower('!');

	// Printable Character Tests
	print_title("Printable Character Tests");
	test_isprint(' ');
	test_isprint('A');
	test_isprint(127);
	test_isprint(128);

	// String Length Tests
	print_title("String Length Tests");
	test_strlen("");
	test_strlen("Hello");
	test_strlen("A longer string for testing.");

	// String Character Search Tests
	print_title("String Character Search Tests");
	test_strchr("Hello, world!", 'o');
	test_strchr("Hello, world!", 'z');
	test_strchr("", 'a');

	// String Reverse Character Search Tests
	print_title("String Reverse Character Search Tests");
	test_strrchr("Hello, world!", 'o');
	test_strrchr("Hello, world!", 'z');
	test_strrchr("", 'a');

	// String Copy Tests
	print_title("String Copy Tests");
	test_strlcpy((char[20]){}, "Hello, world!", 5);
	test_strlcpy((char[20]){}, "Short", 10);

	// String Concatenation Tests
	print_title("String Concatenation Tests");
	test_strlcat((char[20]){"Hello"}, " world!", 20);
	test_strlcat((char[20]){"Hello"}, " more text", 5);

	// String Search with Length Limit Tests
	print_title("String Search with Length Limit Tests");
	test_strnstr("Hello, world!", "world", 12);
	test_strnstr("Hello, world!", "test", 12);

	// Memory Zeroing Tests
	print_title("Memory Zeroing Tests");
	test_bzero((char[10]){"123456789"}, 5);

	// Memory Set Tests
	print_title("Memory Set Tests");
	test_memset((char[10]){"123456789"}, 'A', 5);

	// Memory Copy Tests
	print_title("Memory Copy Tests");
	test_memcpy((char[10]){}, "Hello", 6);

	// Memory Character Search Tests
	print_title("Memory Character Search Tests");
	test_memchr("Hello, world!", 'o', 12);
	test_memchr("Hello, world!", 'z', 12);

	// Memory Compare Tests
	print_title("Memory Compare Tests");
	test_memcmp("Hello", "Hello", 5);
	test_memcmp("Hello", "World", 5);

	// Memory Move Tests
	print_title("Memory Move Tests");
	test_memmove((char[20]){"Hello, world!"} + 7, (char[20]){"Hello, world!"}, 6);

	// ASCII to Integer Conversion Tests
	print_title("ASCII to Integer Conversion Tests");
	test_atoi("123");
	test_atoi("-456");
	test_atoi("0");

	// Allocated Memory Zeroing Tests
	print_title("Allocated Memory Zeroing Tests");
	test_calloc(5, sizeof(int));

	// String Duplication Tests
	print_title("String Duplication Tests");
	test_strdup("Hello, world!");
	test_strdup("");
}
