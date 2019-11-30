/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:41:52 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/27 20:57:32 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);

	printf("Division:n %d\n", *div);
	printf(" Resto: %d\n", *mod);
		
}

int main()
{
	int a = 25;
	int b = 5;
	int *div = a / b;
	int *mod = a % b;
	ft_div_mod(a, b, &div, &mod);
}
