/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:28:42 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/23 15:48:54 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), obj(0)
{}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &obj)
{
	this->obj = &obj;
}

void HumanB::attack()
{
	if (obj)
		std::cout << name <<" attacks with their " << obj->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with " << std::endl;
}