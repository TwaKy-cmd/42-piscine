/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code detailler ex01.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khebert <khebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 09:26:53 by khebert           #+#    #+#             */
/*   Updated: 2025/09/18 15:25:47 by khebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)/// Fonction de base /////
{
	*********nbr = 42;/// attribution du numero 42 au pointeur *********nbr ////
}

int	main(void)//// Fonction main /////
{
	int depart;//// int de la valeur de depart
	depart = '0';//// attribution dune valeur au int de depart 
	int	*ptr1 = &depart;//// Pointeur int nommer ptr1 qui va a ladresse de l'int depart
	int **ptr2 = &ptr1;//// pointeur int nommer ptr2 qui va a ladresse du ptr1
	int ***ptr3 = &ptr2;//// pointeur int ptr3 qui va chercher ladresse de ptr2
	int ****ptr4 = &ptr3;/////// pointeur int ptr4 qui va chercher l'adresse de ptr3
	int *****ptr5 = &ptr4;//////// pointeur int ptr5 qui va chercher ladresse de ptr4
	int ******ptr6 = &ptr5;/////// pointeur int ptr6 qui va chercher ladresse de ptr5
	int *******ptr7 = &ptr6;//////// pointeur int ptr7 qui va chercher ladresse de ptr6
	int ********ptr8 = &ptr7;//////// pointeur int ptr8 qui va chercher ladresse de ptr7
	int *********ptr9 = &ptr8;//////// pointeur int ptr9 qui va chercher ladresse de ptr8
	ft_ultimate_ft(ptr9);//// Informe la fonction ft_ultimate_ft de prendre ladresse ou pointe ptr9
	printf("%d", depart);/// permet dafficher la valeur : %d : permet dafficher un int , depart : nom de l'int 
	return (0); 
}