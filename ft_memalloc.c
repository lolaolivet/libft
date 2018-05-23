/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:59:48 by lolivet           #+#    #+#             */
/*   Updated: 2018/05/23 12:12:14 by lolivet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void    *ptr;

	if (!((ptr = malloc(size))))
		return (NULL);
	if (ptr)
		ft_bzero(ptr, size);
	return (ptr);
}
