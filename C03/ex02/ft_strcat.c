/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 09:59:31 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/17 15:26:30 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	pos_dest;
	int pos_src;

	pos_dest = 0;
	while (dest[pos_dest] != '\0')
	{
		pos_dest++;
	}
	pos_src = 0;
	while (src[pos_src] != '\0')
	{
		dest[pos_dest] = src[pos_src];
		pos_dest++;
		pos_src++;
	}
	dest[pos_dest] = '\0';
	return (dest);
}
