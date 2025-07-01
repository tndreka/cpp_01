/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:28:34 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/01 18:15:33 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type)
{

}

Weapon::~Weapon(){}

const std::string& Weapon::getType()const
{
	return type;
}

void Weapon::setType(const std::string &newType)
{
	type = newType;
}