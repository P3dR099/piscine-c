/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 22:47:55 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/21 11:12:41 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = -1;
	while (a++ < 9)
	{
		b = -1;
		while (b++ < 8)
		{
			c = -1;
			while (c++ < 9)
			{
			if (a == 0 || b == 0 || c	
				d = -1;
				while (d++ < 9)
				{	
			     	
					ft_putchar('0' + a);
					ft_putchar('0' + b);
					ft_putchar(' ');
					ft_putchar('0' + c);
					ft_putchar('0' + d);
					if (a <= 9 && b < 9)
					{
							ft_putchar(',');
					}
				}
			}
		}
	}
}

int main()
{
	ft_print_comb2();
}
