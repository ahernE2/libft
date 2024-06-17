#ifndef LIBFT_H
# define LIBFT_H

#import <unistd.h>
#import <stdlib.h>
#import <fcntl.h>
#import <stddef.h>

// Declarations from ft_atoi.c
int	ft_atoi(char *str);
// Declarations from ft_bzero.c
void	ft_bzero(void *s, size_t n);
// Declarations from ft_calloc.c
void	*ft_calloc(size_t nmemb, size_t size);
// Declarations from ft_isalnum.c
int	ft_isalnum(int param);
// Declarations from ft_isalpha.c
int	ft_isalpha(int param);
// Declarations from ft_isascii.c
int	ft_isascii(int param);
// Declarations from ft_isdigit.c
int	ft_isdigit(int param);
// Declarations from ft_isprint.c
int	ft_isprint(int param);
// Declarations from ft_memcmp.c
int	ft_memcmp(void *s1, void *s2, size_t n);
// Declarations from ft_memcpy.c
void	*ft_memcpy(void *dest, void *src, size_t n);
// Declarations from ft_memmove.c
void	*memove(void *dest, void *src, size_t n);
// Declarations from ft_memset.c
void	*ft_memset(void *s, int c, size_t n);
// Declarations from ft_strchr.c
char	*ft_strchr(char *str, int c);
// Declarations from ft_strdup.c
char	*ft_strdup(char *str);
// Declarations from ft_strjoin.c
char	*str_join(char *s1, char *s2);
// Declarations from ft_strlcat.c
size_t	ft_strlcat(char *dest, char *src, size_t nb);
// Declarations from ft_strlcpy.c
size_t	ft_strlcpy(char *dest, char *src, size_t size);
// Declarations from ft_strlen.c
size_t	ft_strlen(char *str);
// Declarations from ft_strncmp.c
int	ft_strncmp(char *s1, char *s2, size_t n);
// Declarations from ft_strnstr.c
char	*ft_strnstr(char *str, char *to_find, size_t len);
// Declarations from ft_strrchr.c
char	*ft_strrchr(char *str, int c);
// Declarations from ft_substr.c
char	*ft_substr(char *s, size_t start, size_t len);
// Declarations from ft_tolower.c
int	ft_tolower(int param);
// Declarations from ft_toupper.c
int	ft_toupper(int *param);
// Declarations from ft_memchr.c
void	*ft_memchr(void *s, int c, size_t n);

#endif
