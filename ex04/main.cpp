/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:52:47 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/01 18:35:15 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //print
#include <string> // string operations
#include <fstream> //read files and writefiles

int main(int ac, char *av[])
{
	std::string line;
	if (ac == 4)
	{
		if(strlen(av[2]) == 0)
		{
			std::cout << "Error: string search can not be empty\n";
		}
		std::ifstream inputFile(av[1]);
		if(inputFile.is_open())
		{
			std::string content;
			bool first_line = true;
			while (std::getline(inputFile, line))
			{
				if (!first_line)
					content += "\n";
				content = content + line;
				first_line = false;
			}
			std::cout << content << std::endl << std::endl;
			size_t pos = 0;
			size_t last_pos = 0;
			std::string result;
			while ((pos = content.find(av[2], pos)) != std::string::npos)
			{
				result += content.substr(last_pos, pos - last_pos);
				result += av[3];
				pos += strlen(av[2]);
				last_pos = pos;
			}
			result += content.substr(last_pos);
			std::string newfile = std::string(av[1]) + ".replace";
			std::ofstream outputFile(newfile);
			if (outputFile.is_open())
			{
				outputFile << result;
				outputFile.close();
			}
		}
		else
		{
			std::cout << "Error: test.txt file was NOT opened \n";
			return 1;
		}
	}
	else
	{
		std::cout << "F A I L E D  ! ! !\n";
		return 1;
	}
	return 0;
}