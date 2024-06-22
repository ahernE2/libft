/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 00:28:18 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/23 00:32:08 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_lstsize(t_list *lst)
{
	size_t	index;

	index = 0;
	while (lst)
	{
		lst = lst -> next;
		index++;
	}
	return (index);
}
