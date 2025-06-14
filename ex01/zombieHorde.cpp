/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:22:23 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/14 15:27:34 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name)
{
	Zombie	*x_zombies[n];
	for (int i = 0; i < n ; i++)
	{
		x_zombies[i] = new Zombie(name);
		x_zombies[i]->announce();
	}
	return *x_zombies;
}