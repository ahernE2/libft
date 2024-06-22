/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:02:10 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/23 01:17:57 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst, !del)
		return (NULL);
	del(lst -> content);
	free(lst);
	lst = NULL;
}
