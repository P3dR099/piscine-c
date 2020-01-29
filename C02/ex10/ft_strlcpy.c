/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 13:18:04 by pconde-c          #+#    #+#             */
/*   Updated: 2019/12/03 18:05:14 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	while (src[i] != '\0')
		i++;
	n = 0;
	if (size == 0)
	{
		return (i);
	}
	while (src[n] != '\0' && n < (size - 1))
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (i);
}
