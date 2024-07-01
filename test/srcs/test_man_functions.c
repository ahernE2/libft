/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_man_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:48:50 by alejhern          #+#    #+#             */
/*   Updated: 2024/07/01 19:48:57 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <stdlib.h>

void	test_isalpha(int c)
{
	printf("Funcion ISALPHA(%c) -> EXPECTED: %d RESULT: %d", c + '0', isalpha(c), ft_isalpha(c));
}

void	test_isdigit(int c)
{
	printf("Funcion ISDIGIT(%c) -> EXPECTED: %d RESULT: %d", c + '0', isdigit(c), ft_isdigit(c));
}

void	test_isalnum(int c)
{
	printf("Function ISALNUM(%c) -> EXPECTED: %d RESULT: %d\n", c + '0', isalnum(c), ft_isalnum(c));
}

void	test_isascii(int c)
{
	printf("Function ISASCII(%c) -> EXPECTED: %d RESULT: %d\n", c + '0', isascii(c), ft_isascii(c));
}

void	test_toupper(int c)
{
	printf("Function TOUPPER(%d) -> EXPECTED: %c RESULT: %c\n", c + '0', toupper(c), ft_toupper(c));
}

void	test_tolower(int c)
{
	printf("Function TOLOWER(%d) -> EXPECTED: %c RESULT: %c\n", c + '0', tolower(c), ft_tolower(c));
}

void	test_isprint(int c)
{
	printf("Function ISPRINT(%c) -> EXPECTED: %d RESULT: %d\n", c + '0', isprint(c), ft_isprint(c));
}

void	test_strlen(char *c)
{
	printf("Function STRLEN(%s) -> EXPECTED: %d RESULT: %d\n", c, strlen(c), ft_strlen(c));
}

void	test_strchr(char *str, char c)
{
	char	*expected;
	char	*result;

	expected = strchr(str, c);
	result = ft_strchr(str, c);
	printf("Function STRCHR(%s, %c):", str, c);
	printf("\t-> EXPECTED: %s\n", expected);
	printf("\t-> RESULT: %s\n", result);
}

void	test_strrchr(char *str, char c)
{
	char	*expected;
	char	*result;

	expected = strrchr(str, c);
	result = ft_strrchr(str, c);
	printf("Function STRRCHR(%s, %c):", str, c);
	printf("\t-> EXPECTED: %s\n", expected);
	printf("\t-> RESULT: %s\n", result);
}

void	test_strlcpy(char *dest, char *src, size_t n)
{
	char	*expected;
	char	*result;

	//Copiamos las cadenas
	strcpy(expected, src);
	strcpy(result, src);
	//Ejecutamos funciones
	strlcpy(expected, src, n);
	ft_strlcpy(result, src, n);
	//Imprimos resultados test
	printf("Function STRLCPY(%s, %s, %d):", dest, src, size);
	printf("\t-> EXPECTED: %s\n", expected);
	printf("\t-> RESULT: %s\n", result);
}

void	test_strlcat(char *dest, char *src, size_t nb)
{
	size_t	expected;
	size_t	result;
	char	*dest_exp;
	char	*dest_res;

	//Copiamos las cadenas
	strcpy(dest_exp, src);
	strcpy(dest_res, src);
	//Ejecutamos funciones
	expected = strlcat(dest_exp, src, n);
	result = ft_strlcat(dest_res, src, n);
	//Imprimos resultados test
	printf("Function STRLCAT(%s, %s, %d):", dest, src, size);
	printf("\t-> EXPECTED: %d CADENA: %s\n", expected, dest_exp);
	printf("\t-> RESULT: %d CADENA: %s\n", result, dest_res);
}

void	test_strnstr(char *str, char *to_find, size_t len)
{
	char	*expected;
	char	*result;

	strnstr(str, to_find, len);
	ft_strnstr(str, to_find, len);
	printf("Function STRNSTR(%s, %s, %d):", str, to_find, len);
	printf("\t-> EXPECTED: %s\n", expected);
	printf("\t-> RESULT: %s\n", result);
}

void	test_bzero(char *s, size_t size)
{
	char	*expected;
	char	*result;

	//Copiamos las cadenas
	strcpy(expected, s);
	strcpy(result, s);
	//Ejecutamos funciones;
	bzero(expected, size);
	ft_bzero(result, size);
	//Imprimos resultados test
	printf("Function BZERO(%s, %d):", s, size);
	printf("\t-> EXPECTED: %s\n", expected);
	printf("\t-> RESULT: %s\n", result);
}

void	test_memset(char *s, int c, size_t size)
{
	char	*expected;
	char	*result;

	//Copiamos las cadenas
	strcpy(expected, s);
	strcpy(result, s);
	//Ejecutamos funciones;
	memset(expected, c, size);
	ft_memset(result, c, size);
	//Imprimos resultados test
	printf("Function MEMSET(%s, %d, %d):", s, c, size);
	printf("\t-> EXPECTED: %s\n", expected);
	printf("\t-> RESULT: %s\n", result);
}

void	test_memcpy(char *s, char *d, size_t size)
{
	char	*expected;
	char	*result;

	//Copiamos las cadenas
	strcpy(expected, d);
	strcpy(result, d);
	//Ejecutamos funcion
	memcpy(expected, s, size);
	ft_memcpy(result, s, size);
	//Imprimos resultados test
	printf("Function MEMCPY(%s, %s, %d):", s, d, size);
	printf("\t-> EXPECTED: %s\n", expected);
	printf("\t-> RESULT: %s\n", result);
}

void	test_memchr(void *s, char c, size_t n)
{
	unsigned char	*expected;
	unsigned char	*result;

	expected = (unsigned char *)memchr(s, c, n);
	result = (unsigned char *)ft_memchr(s, c, n);
	printf("Function MEMCHR(%s, %c, %d):", s, c, n);
	printf("\t-> EXPECTED: %s\n", expected);
	printf("\t-> RESULT: %s\n", result);
}

void	test_memcmp(char *s1, char *s2, size_t n)
{
	int	expected;
	int	result;

	expected = memcmp(s1, s2, n);
	result = ft_memcmp(s1, s2, n);
	printf("Function MEMCMP(%s, %s, %d):", s1, s2, n);
	printf("\t-> EXPECTED: %d\n", expected);
	printf("\t-> RESULT: %d\n", result);
}

void	test_memove(char *s1, char *s2, size_t n)
{
	int	expected;
	int	result;

	//Copiamos las cadenas
	strcpy(expected, s);
	strcpy(result, s);
	//Ejecutamos funciones
	expected = memove(s1, s2, n);
	result = ft_memcmp(s1, s2, n);
	printf("Function MEMMOVE(%s, %s, %d):", s1, s2, n);
	printf("\t-> EXPECTED: %d\n", expected);
	printf("\t-> RESULT: %d\n", result);
}

void	test_atoi(char *nb)
{
	int	expected;
	int	result;

	expected = atoi(nb);
	result = ft_atoi(nb);
	printf("Function ATOI(%s):", nb);
	printf("\t-> EXPECTED: %d\n", expected);
	printf("\t-> RESULT: %d\n", result);
}

void	test_calloc(int nbem, size_t size)
{
	void	*expected;
	void	*result;

	*expected = calloc(nbem, size);
	*result	= ft_calloc(nbem, size);
	printf("Function MALLOC(%s, %s)", nbem, size);
	if (memcmp(expected, result) == 0)
		printf("OK!");
	else
		printf("FAIL");
}

void	test_strdup(char *str)
{
	char	*expected;
	char	*result;

	expected = strdup(str);
	result = ft_strdup(str);
	printf("Function STRDUP");
	printf("\t-> EXPECTED: %d\n", expected);
	printf("\t-> RESULT: %d\n", result);
}
