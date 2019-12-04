/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 18:59:44 by pconde-c          #+#    #+#             */
/*   Updated: 2019/12/02 13:04:32 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main()
{
	char str[] = "salut, comment tu vas ? 42mots (q)uarante-deux; cinquante+et+un";
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
