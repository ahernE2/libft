/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:38:43 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/12 20:48:18 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

static int	ft_isupper(char letter);
static int	ft_islower(char letter);
int			ft_isalnum(char *str);
int			ft_isalpha(int param);
int			ft_isascii(char param);
int			ft_isdigit(int param);
int			ft_isprint(int param);
char		ft_strchr(char param, int c);
int			ft_strlen(char *str);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strrchr(char *str, int c);
char		*ft_tolower(char *str);
char		*ft_toupper(char *str);

#endif
