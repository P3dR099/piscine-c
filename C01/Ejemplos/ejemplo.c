/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ejemplo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:05:23 by pconde-c          #+#    #+#             */
/*   Updated: 2019/11/20 17:21:53 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int main()
{
	int a;
	int b;
	int *ptr;
	int **ptr2;

	ptr = &a;
	printf("direccion de a: %p\n", ptr);
	ptr = &b;
	printf("direccion de b: %p\n", ptr);
	ptr2 = &ptr;
	printf("Direccion de puntero ptr2: %p\n", ptr2);
	return(0);


}
