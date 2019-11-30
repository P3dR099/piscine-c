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
	printf("%i %i %i %i %i %i %i %i %i %i", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10]);
}
int main()
{
	int tab[] = {1,2,3,4,5,6,7,8,9,10};
	int size = 10;
	ft_rev_int_tab(tab, size);
}




