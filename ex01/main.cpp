/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:22:14 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/01 17:56:20 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	
	Zombie	*x_zombies;
	//case with 1--> Zombie;
	//x_zombies = new Zombie("draco");
	//x_zombies->announce();
	//delete x_zombies;

	// for (int i = 0; i < n; i++)
	// {
	// 	x_zombies[i] = new Zombie("D R A C O ");
	// 	std::cout << i ;
	// 	x_zombies[i]->announce();
	// }
	//clean up
	// for (int i = 0; i < n; i++)
	// {
	// 	delete x_zombies[i];
	// }
	x_zombies = zombieHorde(7, "D R A C U L A ");
	delete[] x_zombies;
	return 0;
}
