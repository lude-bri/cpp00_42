/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:26:15 by lude-bri          #+#    #+#             */
/*   Updated: 2025/03/28 12:39:16 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		pb;
	std::string		cmd; 

	pb.startPhonebook();
	while (!std::cin.eof())
	{
		std::cout << GREEN; 
		usleep(ONE_SECOND);
		std::cout << "--> 📞 Text your command: \n";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD")
			pb.addContact();
		else if (cmd == "SEARCH")
			pb.searchContact();
		else
			std::cout << "Wrong command! Try again.. it's not that hard" << std::endl;

	}
	return (0);
}
