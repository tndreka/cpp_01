/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:43:15 by tndreka           #+#    #+#             */
/*   Updated: 2025/05/26 15:36:08 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie() 
{
	std::cout << _name << " is being Destroyed ! ! !\n";	
}

void Zombie::announce (void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}