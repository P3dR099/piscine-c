/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 18:58:30 by pconde-c          #+#    #+#             */
/*   Updated: 2019/12/03 17:43:09 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
					if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
						str[i] -= 32;
		i++;
	}
	return (str);
}
