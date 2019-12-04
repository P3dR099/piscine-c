/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 01:40:57 by pconde-c          #+#    #+#             */
/*   Updated: 2019/12/04 17:09:06 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		b;

	i = 0;
	if (to_find[0] == '\0')
		return(str);
	while (str[i] != '\0')	
	{	
		b = 0;
		while (str[i + b] == to_find[b])
		{
			b++;
			if (to_find[b] == '\0')
			return (&str[i]);
		
		}
		i++;
	}
	return (0);
}
