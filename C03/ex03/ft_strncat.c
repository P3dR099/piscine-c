/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 22:32:50 by pconde-c          #+#    #+#             */
/*   Updated: 2019/12/04 16:08:51 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				pos_dest;
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
