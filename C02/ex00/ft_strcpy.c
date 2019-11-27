/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 11:44:40 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/27 19:54:03 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char *ft_strcpy(char *dest, char *src)
{
	int  i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		
		i++;


	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[5] = "adio";
	char src[5] = "hola";

	printf("%s", ft_strcpy(dest, src));
	return (0);
}	
