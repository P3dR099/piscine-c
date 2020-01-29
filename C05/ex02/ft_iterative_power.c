/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:35:48 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/23 19:52:05 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int n;

	n = nb;
	if (power == 0)
		nb = 1;
	else if (power < 0)
		nb = 0;
	while (power > 1)
	{
		nb *= n;
		power--;
	}
	return (nb);
}
