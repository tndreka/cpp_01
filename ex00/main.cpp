/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:48:42 by tndreka           #+#    #+#             */
/*   Updated: 2025/05/26 18:18:11 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
	Zombie *myZombie;
	Zombie *two;
	
	myZombie = new Zombie("Frankenstein");
	myZombie->announce();
	two = newZombie("Dracula");
	two->announce();
	randomChump("ZoMbIe");
	delete two;
	delete myZombie;
	return(0);
}