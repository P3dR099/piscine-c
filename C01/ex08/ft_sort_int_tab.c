/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ejemplo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 12:53:16 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/27 19:23:40 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int cont;
	int swap;

	cont = 0;
	while (cont < (size - 1))
	{
		if (tab[cont] > tab[cont + 1])
		{
			swap = tab[cont];
			tab[cont] = tab[cont + 1];
			tab[cont + 1] = swap;
			cont = 0;
		}
		else
			cont++;
	}
}
