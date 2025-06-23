/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:52:47 by tndreka           #+#    #+#             */
/*   Updated: 2025/06/23 16:45:11 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //print
#include <string> // string operations
#include <fstream> //read files and writefiles

int main(int ac, char *av[])
{
	(void)av;
	std::string line;
	if (ac == 4)
	{
		std::ifstream inputFile("test.txt");
		if(inputFile.is_open())
		{
			std::cout << "test.txt file was opened \n";
			std::string content;
			while (std::getline(inputFile, line))
			{
				content = content + line + "\n";
			}
			std::cout << content;// prints the content of the text.txt file after the read
		}
		else
		{
			std::cout << "Error: test.txt file was NOT opened \n";
			return 1;
		}
		std::cout << "success ! ! !\n";
	}
	else
		std::cout << "F A I L E D  ! ! !\n";
	return 0;
}