/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:18:33 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/19 08:00:09 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	pos;

	pos = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[pos] != '\0')
	{
		if ((str[pos] >= 'A') && (str[pos] <= 'Z'))
			str[pos] = str[pos] + 32;
		if (str[pos] >= 'a' && str[pos] <= 'z')
			if (!(str[pos - 1] >= 'A' && str[pos - 1] <= 'Z'))
				if (!(str[pos - 1] >= 'a' && str[pos - 1] <= 'z'))
					if (!(str[pos - 1] >= '0' && str[pos - 1] <= '9'))
						str[pos] -= 32;
		pos++;
	}
	return (str);
}

/*int main()
{
	char *str = "hola como estas";
	ft_strcapitalize(str);
	printf("%c: ", ft_strcapitalize(str));
}*/
