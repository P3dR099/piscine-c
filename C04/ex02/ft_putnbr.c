/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:06:12 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/21 19:30:44 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			digit;
	unsigned int	num;

	num = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		num = -nb;
	}
	if (num < 10)
	{
		digit = num + '0';
		write(1, &digit, 1);
	}
	else
	{
		ft_putnbr(num / 10);
		digit = num % 10 + '0';
		write(1, &digit, 1);
	}
}
