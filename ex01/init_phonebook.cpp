/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_phonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:06:20 by lude-bri          #+#    #+#             */
/*   Updated: 2025/04/21 12:19:22 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void printLoadingBar() {
	const int total = 30;
	std::cout << GREEN; // amazing green

	std::cout << "\nCREATING THIS AMAZING PHONEBOOK...\n\n";
	std::cout << "[";
	std::cout.flush();

	for (int i = 0; i < total; ++i) {
		usleep(100000);
		std::cout << "█";
		std::cout.flush();
	}
	std::cout << "] 100%\n\n";
	usleep(1000000);
	std::cout << "DONE!!! \n";
	usleep(1000000);
	std::cout << RESET;
}

void PhoneBook::startPhonebook() {

	std::cout << GREEN << BRIGHT;
	std::cout << "     ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << std::endl;
	std::cout << "     █                         ███" << std::endl;
	std::cout << "     █   AMAZING PHONEBOOK     ███" << std::endl;
	std::cout << "     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄███" << std::endl;
	std::cout << "         \\  ☎️  BEEP  BEEP  /\n";
	std::cout << "          \\______________/\n";
	std::cout << RESET;

	printLoadingBar();
	std::cout << GREEN << BRIGHT;
	std::cout << "=========================================\n";
	std::cout << "== WELCOME TO YOUR AMAZING PHONEBOOK!! ==\n";
	std::cout << "=========================================\n";
	std::cout << "Where everything is unintentionally amazing... or quite that\n\n";

	usleep(100000);
	std::cout << "       _                 \n";
	usleep(100000);
	std::cout << "      | |                \n";
	usleep(100000);
	std::cout << "      |_|                \n";
	usleep(100000);
	std::cout << "      /_                 \n";
	usleep(100000);
	std::cout << "    .-'''------.----.    \n";
	usleep(100000);
	std::cout << "    |          U    |    \n";
	usleep(100000);
	std::cout << "    |               |    \n";
	usleep(100000);
	std::cout << "    | ====o======== |    \n";
	usleep(100000);
	std::cout << "    | ============= |    \n";
	usleep(100000);
	std::cout << "    |               |    \n";
	usleep(100000);
	std::cout << "    |_______________|    \n";
	usleep(100000);
	std::cout << "    | _____________ |    \n";
	usleep(100000);
	std::cout << "    ||    Welcome   ||   \n";
	usleep(100000);
	std::cout << "    ||              ||   \n";
	usleep(100000);
	std::cout << "    || _____________||   \n";
	usleep(100000);
	std::cout << "     |__.---'''---.__|   \n";
	usleep(100000);
	std::cout << "     |---------------|   \n";
	usleep(100000);
	std::cout << "     |[Yes][(|)][ No]|   \n";
	usleep(100000);
	std::cout << "     | ___  ___  ___ |   \n";
	usleep(100000);
	std::cout << "     |[<-'][CLR][.->]|   \n";
	usleep(100000);
	std::cout << "     | ___  ___  ___ |   \n";
	usleep(100000);
	std::cout << "     |[1__][2__][3__]|   \n";
	usleep(100000);
	std::cout << "     | ___  ___  ___ |   \n";
	usleep(100000);
	std::cout << "     |[4__][5__][6__]|   \n";
	usleep(100000);
	std::cout << "     | ___  ___  ___ |   \n";
	usleep(100000);
	std::cout << "     |[7__][8__][9__]|   \n";
	usleep(100000);
	std::cout << "     | ___  ___  ___ |   \n";
	usleep(100000);
	std::cout << "     |[*__][0__][#__]|   \n";
	usleep(100000);
	std::cout << "     `--------------'    \n";
	usleep(100000);
	std::cout << "     {__|""|_______'-    \n";
	usleep(100000);
	std::cout << "    `---------------'    \n";
	usleep(1000000);
	std::cout << "Available commands:\n";
	usleep(100000);
	std::cout << "  → ADD     :: Add a new contact\n";
	usleep(100000);
	std::cout << "  → SEARCH  :: Search for a contact\n";
	usleep(100000);
	std::cout << "  → EXIT    :: Exit the application\n";
	usleep(100000);
	std::cout << RESET << std::endl;
}
