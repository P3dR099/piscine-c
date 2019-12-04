/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:40:37 by pconde-c          #+#    #+#             */
/*   Updated: 2019/12/04 19:34:26 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int longitud(char *cadena)
{
   int valor = 0;
   int i;
	i = 0;
//  for(i=0; cadena[ i ]!='\0'; i++)
  	while (cadena[i] != '\0') 
		i++;
		valor++;

   return valor;
}

int ft_atoi(char *cadena)
{
   int potencias[5]={1,10,100,1000,10000};
   int i;
   int valor = 0;
   int lon = longitud(cadena);
	
   i = lon-1;
  // for(i=lon-1; i>=0; i--)
   while (i>=0)
   {
	   i--;
	   valor += (cadena[ i ]-'0') * potencias[ lon-i-1 ];
   }
   return (valor);
}
