/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:22:18 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/14 15:17:25 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	// n = 0;
}

Zombie::~Zombie()
{
	std::cout << _name << "is being destroyed ! ! !\n";
}


void	Zombie::announce(void)
{
	std::cout << _name << " Moar_brainzzzzz\n";
}