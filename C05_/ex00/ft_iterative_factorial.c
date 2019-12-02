/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:10:52 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/24 20:10:20 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int n;

	i = 1;
	n = 1;
	while (nb > 0)
	{
		n *= (i++);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (n);
}
