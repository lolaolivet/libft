/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:22:33 by lolivet           #+#    #+#             */
/*   Updated: 2018/05/21 16:36:35 by lolivet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		k;
	char	*tmp;

	if (!s || !f)
		return (NULL);
	i = 0;
	k = ft_strlen(s);
	tmp = (char*)malloc(sizeof(char) * k + 1);
	if (!tmp)
		return (NULL);
	while (s[i] != '\0')
	{
		tmp[i] = f(s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
