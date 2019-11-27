/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 08:00:57 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/27 19:44:01 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int cont;
	int i;
	int a;

	cont = size - 1;
	i = 0;
	while (i < (size / 2))
	{
		a = tab[i];
		tab[i] = tab[cont];
		tab[cont] = a;
		cont--;
		i++;
	}
}
