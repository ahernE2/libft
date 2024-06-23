/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:24:33 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/23 16:32:47 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fl_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del || !(*lst))
		return ;
	ft_lstclear(&(*lst)-> next, del);
	del((*lst)-> content);
	free(*lst);
	*lst(lst);
}
