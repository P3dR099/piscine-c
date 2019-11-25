/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 08:00:57 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/25 12:39:19 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_rev_int_tab(int *tab, int size)
{
	int size_contador;
	int i;
	int str[size];
	size_contador = size - 1;
	i = 0;
	while (size_contador >= 0)
	{
		str[i] = tab[size_contador];
		size_contador--;
		i++;
		//printf("%d", tab[size]);
	}
		size = 0;
		while (size > 0)
		{
			tab[i] = str[i];
			i++;
			size--;
		}
}

int main()
{
	int tab[] = {1,2,3,4};
	int size = 3;
	printf("i%", ft_rev_int_tab(tab, size));
	//write(1, &i, 1);
}
