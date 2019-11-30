/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 09:50:43 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/17 10:03:32 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int pos;

	pos = 0;
	while ((s1[pos] != '\0' || s2[pos] != '\0') && pos < n)
	{
		if (s1[pos] > s2[pos])
			return (1);
		if (s1[pos] < s2[pos])
			return (-1);
		pos++;
	}
	return (0);
}
