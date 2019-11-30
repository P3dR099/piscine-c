/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:09:12 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/16 16:03:13 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	pos_dest;
	unsigned int	pos_src;

	pos_dest = 0;
	while (dest[pos_dest] != '\0')
	{
		pos_dest++;
	}
	pos_src = 0;
	while (src[pos_src] != '\0' && pos_src < nb)
	{
		dest[pos_dest] = src[pos_src];
		pos_dest++;
		pos_src++;
	}
	dest[pos_dest] = '\0';
	return (dest);
}
