/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:52:42 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/25 14:06:33 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl stimulation;

	stimulation.complain("DEBUG");
	stimulation.complain("INFO");
	stimulation.complain("WARNING");
	stimulation.complain("ERROR");
	return 0;
}