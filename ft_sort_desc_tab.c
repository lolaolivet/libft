/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_desc_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 18:29:44 by lolivet           #+#    #+#             */
/*   Updated: 2018/05/21 18:30:22 by lolivet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sort_desc_tab(int *tmp)
{
	int		i;
	int		tmp2;

	i = 0;
	while (i < 3)
	{
		if (tmp[i] > tmp[i + 1])
		{
			tmp2 = tmp[i];
			tmp[i] = tmp[i + 1];
			tmp[i + 1] = tmp2;
			i = 0;
		}
		else
			i++;
	}
	return (tmp[0]);
}