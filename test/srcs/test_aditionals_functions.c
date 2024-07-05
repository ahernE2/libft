/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_aditionals_functions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 22:32:08 by alejhern          #+#    #+#             */
/*   Updated: 2024/07/05 23:37:13 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

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

void	test_strjoin(char const *s1, char const *s2, char *exp)
{
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("%s", get_color_test(exp, result, sizeof(char)));
	printf("Function STRJOIN('%s', '%s')\n", s1, s2);
	printf("\t-> EXPECTED: %s\n", exp);
	printf("\t-> RESULT:   %s\n", result);
	printf("\033[0m");
	printf("\n");
	free(result);
}

void	test_strtrim(char const *s1, char const *set, char *exp)
{
	char	*result;

	result = ft_strtrim(s1, set);
	printf("%s", get_color_test(exp, result, sizeof(char)));
	printf("Function STRTRIM('%s', '%s')\n", s1, set);
	printf("\t-> EXPECTED: %s\n", exp);
	printf("\t-> RESULT:   %s\n", result);
	printf("\033[0m");
	printf("\n");
	free(result);
}

void	test_split(char const *s, char c, char **exp)
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
		printf("\t-> EXPECTED[%d]: %s\n", index, exp[index]);
		printf("\t-> RESULT[%d]:   %s\n", index, result[index]);
		printf("\033[0m");
		printf("\n");
		free(result[index]);
		index++;
	}
	free(result);
}

void	test_itoa(int n, char *exp)
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

void	test_strmapi(char *s, char (*f)(unsigned int, char), char *exp)
{
	char	*result;

	result = ft_strmapi(s, f);
	printf("%s", get_color_test(exp, result, sizeof(char)));
	printf("Function STRMAPI('%s')\n", s);
	printf("\t-> EXPECTED: %s\n", exp);
	printf("\t-> RESULT:   %s\n", result);
	printf("\033[0m");
	printf("\n");
}

void	test_striteri(char *s, void (*f)(unsigned int, char *), char *exp)
{
	ft_striteri(s, f);
	printf("%s", get_color_test(exp, s, sizeof(char)));
	printf("Function STRITERI('%s')\n", s);
	printf("\t-> EXPECTED: %s\n", exp);
	printf("\t-> RESULT:   %s\n", s);
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
	if (fd == -1)
	{
		printf("No se pudo abrir el archivo para lectura\n");
		return ;
	}
	read(fd, &buffer, 1);
	close(fd);
	printf("%s", get_color_test((void *)&c, (void *)&buffer, sizeof(int)));
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
	if (fd == -1)
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
	if (fd == -1)
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
	size_t	bytes_read;
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
	if (fd == -1)
	{
		printf("No se pudo abrir el archivo para lectura\n");
		return ;
	}
	bytes_read = 0;
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
