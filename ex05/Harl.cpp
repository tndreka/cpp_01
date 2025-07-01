/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:52:36 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/01 18:44:33 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
	<< " enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
			<< "years, whereas you started working here just last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::string nivel[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = 
	 {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	 };
	int i = 0;
	while (i < 4)
	{
		if (level == nivel[i])
		{
			(this->*functions[i])();
			return ;	
		}
		i++;
	}
	std::cout <<"Invalid complaint level: "<< level << std::endl;
}