/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 20:19:48 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/27 21:23:18 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	if (str == '\0')
	{	return (1);
		while(str != '\0')
		{
			if (str < 'A' || (str > 'Z' && str < 'a') || str > 'z')
			{
				return (0);
			}
			str++;
		}

	}
}
int main()
{
	char str[] = "trsx";
	printf("%i", ft_str_is_alpha(str));
	

}
