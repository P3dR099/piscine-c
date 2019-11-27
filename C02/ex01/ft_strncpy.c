/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 13:47:32 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/27 21:29:42 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (n > i)
	{
		i = 0;
		while (src[i] != '\0')
	{
		dest[i] = src[i];

			i++;
	}
		while(i <= n)
		{
			dest[i] = '\0';
				i++;
		}
		
	}
	i = 0;
	while(i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}

int main()
{
	
	char dest[4] = "hola";
	char src[] = "adiosss";
	//int x = 6;
	printf("%s", ft_strncpy(dest, src, 7));
	return (0);
}
