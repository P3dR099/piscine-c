/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 03:23:44 by pconde-c          #+#    #+#             */
/*   Updated: 2019/12/04 04:04:21 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	printf("%c", str[i]);
}

int main()
{
	char a[5] = "hola";
	ft_putstr(a);
	//printf("%c", ft_putstr(a));
}
