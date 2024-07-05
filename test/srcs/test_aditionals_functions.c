/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_aditionals_functions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 22:32:08 by alejhern          #+#    #+#             */
/*   Updated: 2024/07/05 22:14:13 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

void	test_substr(char const *s, unsigned int start, size_t len, char *exp)
{
	char	*result;

	result = ft_substr(s, start, len);
	printf("%s", get_color_test(exp, result, sizeof(char)));
	printf("Function SUBSTR('%s', %d, %zu)\n", s, start, len);
	printf("\t-> EXPECTED: %s\n", exp);
	printf("\t-> RESULT:   %s\n", result);
	printf("\033[0m");
	printf("\n");
	free(result);
}

void	test_join(char const *s1, char const *s2, char *exp)
{
	char	*result;

	result = ft_join(s1, s2);
	printf("%s", get_color_test(exp, result, sizeof(char)));
	printf("Function JOIN('%s', '%s', %zu)\n", s1, s2, len);
	printf("\t-> EXPECTED: %s\n", exp);
	printf("\t-> RESULT:   %s\n", result);
	printf("\033[0m");
	printf("\n");
	free(result);
}

void	test_trim(char const *s1, char const *s2, char *exp)
{
	char	*result;

	result = ft_trim(s1, s2);
	printf("%s", get_color_test(exp, result, sizeof(char)));
	printf("Function TRIM('%s', '%s')\n", s1, s2);
	printf("\t-> EXPECTED: %s\n", exp);
	printf("\t-> RESULT:   %s\n", result);
	printf("\033[0m");
	printf("\n");
	free(result);
}

void	test_split(char const *s, char c, char **expected);
{
	char **result;
	unsigned int index;

	result = ft_split(s, c);
	index = 0;
	while (result[index])
	{
		printf("%s", get_color_test(exp[index], result[index], sizeof(char)));
		index++;
	}
	printf("Function SPLIT('%s', '%c')\n", s, c);
	index = 0;
	while (result[index])
	{
		printf("%s", get_color_test(exp[index], result[index], sizeof(char)));
		printf("\t-> EXPECTED[%d]: %s\n", index, exp);
		printf("\t-> RESULT:   %s\n", result);
		printf("\033[0m");
		printf("\n");
		free(result[index]) index++;
	}
	free(result);
}

void	test_itoa(int n, char *exp);
{
	char *result;

	result = ft_itoa(n);
	printf("%s", get_color_test(exp, result, sizeof(char)));
	printf("Function ITOA(%d)\n", n);
	printf("\t-> EXPECTED: %s\n", exp);
	printf("\t-> RESULT:   %s\n", result);
	printf("\033[0m");
	printf("\n");
	free(result);
}

void	test_strmapi(char const *s, char (*f)(unsigned int, char), char *exp)
{
	char	*result;

	result = ft_strmapi(n);
	printf("%s", get_color_test(exp, result, sizeof(char)));
	printf("Function STRMAPI('%s', %s)\n", s, (FuncMapping)f);
	printf("\t-> EXPECTED: %s\n", exp);
	printf("\t-> RESULT:   %s\n", result);
	printf("\033[0m");
	printf("\n");
}

void	test_striteri(char *s, void (*f)(unsigned int, char *), char *)
{
	char	*result;

	result = ft_striteri(n);
	printf("%s", get_color_test(exp, result, sizeof(char)));
	printf("Function STRITERI('%s', %s)\n", s, (FuncMapping)f);
	printf("\t-> EXPECTED: %s\n", exp);
	printf("\t-> RESULT:   %s\n", result);
	printf("\033[0m");
}

void	test_putchar_fd(char c)
{
	int		fd;
	char	buffer;

	fd = open("../test.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("No se pudo abrir el archivo\n");
		return ;
	}
	ft_putchar_fd(c, fd);
	close(fd);
	fd = open("../test.txt", O_RDONLY);
	if (file == -1)
	{
		printf("No se pudo abrir el archivo para lectura\n");
		return ;
	}
	read(fd, &buffer, 1);
	close(fd);
	printf("%s", get_color_test(c, buffer, sizeof(char)));
	printf("Function PUTCHAR_FD('%c')\n", c);
	printf("\t-> EXPECTED: %c\n", c);
	printf("\t-> RESULT:   %c\n", buffer);
	printf("\033[0m");
}

void	test_putstr_fd(char *str)
{
	int		fd;
	size_t	bytes_read;
	char	*buffer;

	fd = open("../test.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("No se pudo abrir el archivo\n");
		return ;
	}
	ft_putstr_fd(str, fd);
	close(fd);
	fd = open("../test.txt", O_RDONLY);
	if (file == -1)
	{
		printf("No se pudo abrir el archivo para lectura\n");
		return ;
	}
	bytes_read = read(fd, &buffer, strlen(str));
	buffer[bytes_read] = '\0';
	close(fd);
	printf("%s", get_color_test(str, buffer, sizeof(char)));
	printf("Function PUTSTR_FD('%s')\n", str);
	printf("\t-> EXPECTED: %s\n", str);
	printf("\t-> RESULT:   %s\n", buffer);
	printf("\033[0m");
}

void	test_putendl_fd(char *str)
{
	int		fd;
	size_t	bytes_read;
	char	*buffer;

	fd = open("../test.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("No se pudo abrir el archivo\n");
		return ;
	}
	ft_putendl_fd(str, fd);
	close(fd);
	fd = open("../test.txt", O_RDONLY);
	if (file == -1)
	{
		printf("No se pudo abrir el archivo para lectura\n");
		return ;
	}
	bytes_read = read(fd, &buffer, strlen(str));
	buffer[bytes_read] = '\0';
	close(fd);
	printf("%s", get_color_test(str, buffer, sizeof(char)));
	printf("Function PUTENDL_FD('%s')\n", str);
	printf("\t-> EXPECTED: %s\n\n", str);
	printf("\t-> RESULT:   %s\n", buffer);
	printf("\033[0m");
}

void	test_putnbr_fd(int nb)
{
	int		fd;
	char	*buffer;
	int		result;

	fd = open("../test.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("No se pudo abrir el archivo\n");
		return ;
	}
	ft_putnbr_fd(nb, fd);
	close(fd);
	fd = open("../test.txt", O_RDONLY);
	if (file == -1)
	{
		printf("No se pudo abrir el archivo para lectura\n");
		return ;
	}
	while (read(fd, &buffer, 1) == 1)
		bytes_read++;
	buffer[bytes_read] = '\0';
	close(fd);
	result = atoi(buffer);
	printf("%s", get_color_test((void *)&nb, (void *)&result, sizeof(int)));
	printf("Function PUTNBR_FD(%d)\n", nb);
	printf("\t-> EXPECTED: %d\n", nb);
	printf("\t-> RESULT:   %d\n", result);
	printf("\033[0m");
}
