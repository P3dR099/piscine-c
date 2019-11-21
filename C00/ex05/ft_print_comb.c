/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:59:37 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/21 11:21:55 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = -1;
	while (a++ < 7)
	{
		b = a;
		while (b++ < 8)
		{
			c = b;
			while (c++ < 9)
			{
				ft_putchar('0' + a);
				ft_putchar('0' + b);
				ft_putchar('0' + c);
				if (a < 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}



int main()
{
	ft_print_comb();
}
