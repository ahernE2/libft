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
    print_title("Testing ft_atoi");
    test_atoi("12345");
    test_atoi("-678");
    test_atoi("0");
    test_atoi("2147483647");  // Max value for int
    test_atoi("-2147483648"); // Min value for int

    print_title("Testing ft_bzero");
    test_bzero("To infinity and beyond", 10);
    test_bzero("I am Iron Man", 7);
    test_bzero("May the Force be with you", 6);
    test_bzero("After all this time?", 0); // Edge case with size 0

    print_title("Testing ft_calloc");
    test_calloc(5, sizeof(int));
    test_calloc(0, sizeof(double)); // Edge case with nmemb = 0
    test_calloc(1, sizeof(char));
    test_calloc(10, sizeof(long));

    print_title("Testing ft_isalnum");
    test_isalnum('A');
    test_isalnum('5');
    test_isalnum('*');
    test_isalnum(' ');

    print_title("Testing ft_isalpha");
    test_isalpha('D');
    test_isalpha('W');
    test_isalpha('E');
    test_isalpha('*');

    print_title("Testing ft_isascii");
    test_isascii('T');
    test_isascii('0');
    test_isascii(65);  // ASCII 'A'
    test_isascii(0);   // ASCII NUL

    print_title("Testing ft_isdigit");
    test_isdigit('9');
    test_isdigit('3');
    test_isdigit('N');
    test_isdigit(' ');

    print_title("Testing ft_isprint");
    test_isprint('I');
    test_isprint('W');
    test_isprint('H');
    test_isprint(1); // Non-printable ASCII

    print_title("Testing ft_tolower");
    test_tolower('A');
    test_tolower('S');
    test_tolower('W');
    test_tolower('7');

    print_title("Testing ft_toupper");
    test_toupper('a');
    test_toupper('i');
    test_toupper('e');
    test_toupper('9');

    print_title("Testing ft_memcpy");
    test_memcpy("I love you. / I know.", "I am Iron Man", 14);
    test_memcpy("Gotta catch 'em all!", "With great power comes great responsibility", 18);
    test_memcpy("Plus ultra!", "I solemnly swear that I am up to no good", 11);
    test_memcpy("Avengers Assemble!", "I have spoken.", 7);

    print_title("Testing ft_memmove");
    test_memmove("I am Groot", "Winter is coming", 9);
    test_memmove("To infinity and beyond", "I am inevitable.", 6);
    test_memmove("Do or do not, there is no try.", "I am Iron Man", 7);
    test_memmove("May the Force be with you", "It's a trap!", 12);

    print_title("Testing ft_memset");
    test_memset("With great power comes great responsibility", '*', 20);
    test_memset("After all this time?", '0', 5);
    test_memset("I am Iron Man", '#', 13);
    test_memset("To infinity and beyond", '!', 10);

    print_title("Testing ft_strchr");
    test_strchr("I am Groot", 'G');
    test_strchr("Avengers Assemble!", 'o');
    test_strchr("Winter is coming", 'c');
    test_strchr("May the Force be with you", 'x');

    print_title("Testing ft_strdup");
    test_strdup("Avengers Assemble!");
    test_strdup("I am Iron Man");
    test_strdup("May the Force be with you");
    test_strdup("Winter is coming");

    print_title("Testing ft_strlen");
    test_strlen("To infinity and beyond");
    test_strlen("Winter Soldier");
    test_strlen("12345");
    test_strlen("Avengers Assemble!");

    print_title("Testing ft_strnstr");
    test_strnstr("May the Force be with you", "Force", 20);
    test_strnstr("Avengers Assemble!", "Assemble!", 5);
    test_strnstr("I am Groot", "Groot", 8);
    test_strnstr("Winter is coming", "is", 10);

    print_title("Testing ft_strrchr");
    test_strrchr("May the Force be with you", 'e');
    test_strrchr("Avengers Assemble!", 'A');
    test_strrchr("Winter is coming", 'c');
    test_strrchr("I am Groot", 'x');

    print_title("Testing ft_memchr");
    test_memchr("To infinity and beyond", 'b', 20);
    test_memchr("May the Force be with you", 'F', 10);
    test_memchr("12345", '2', 5);
    test_memchr("Avengers Assemble!", 'z', 8);

    print_title("Testing ft_memcmp");
    test_memcmp("To infinity and beyond", "To the moon and back", 10);
    test_memcmp("12345", "12345", 5);
    test_memcmp("May the Force be with you", "Star Wars", 6);
    test_memcmp("I am Groot", "I am groot", 9);
}