/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb22.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 12:19:08 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/27 18:47:24 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a)
{
	char c;
	char d;

	d = (a / 10) + 48;
	c = (a % 10) + 48;
	write(1, &d, 1);
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a);
			write(1, " ", 1);
			print(b);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
