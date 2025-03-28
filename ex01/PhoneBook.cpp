/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:43:17 by lude-bri          #+#    #+#             */
/*   Updated: 2025/03/28 12:42:11 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <unistd.h>  // usleep

//Constructor
PhoneBook::PhoneBook(){}

//Destructor
PhoneBook::~PhoneBook(){}

void printLoadingBar() {
	const int total = 30;
	std::cout << "\033[0;32m"; // amazing green

	std::cout << "\nCREATING THIS AMAZING PHONEBOOK...\n\n";
	std::cout << "[";
	std::cout.flush();

	for (int i = 0; i < total; ++i) {
		usleep(100000); // 100ms por "bloco"
		std::cout << "█";  // bloco de carga
		std::cout.flush(); // força a impressão imediata
	}
	std::cout << "] 100%\n\n";
	usleep(1000000);
	std::cout << "DONE!!! \n";
	usleep(1000000);
	std::cout << "\033[0m"; // reset de cor
	//
}

void PhoneBook::startPhonebook() {
	// Cores retrô
	std::string green = "\033[0;32m";
	std::string reset = "\033[0m";
	std::string bright = "\033[1m";

	// ASCII Art (com estilo "retrô")
	std::cout << green;
	std::cout << "     ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << std::endl;
	std::cout << "     █                         ███" << std::endl;
	std::cout << "     █   AMAZING PHONEBOOK     ███" << std::endl;
	std::cout << "     █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄███" << std::endl;
	std::cout << "         \\  ☎️  BEEP  BEEP  /\n";
	std::cout << "          \\______________/\n";
	std::cout << reset;

	// Barra de carregamento contínua
	printLoadingBar();
	// Mensagem de boas-vindas
	std::cout << green << bright;
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
	std::cout << reset << std::endl;
}

void	PhoneBook::addContact(void)
{
	std::cout << "LET'S ADD A CONTACT!" << std::endl;
	usleep(1000000);
	std::string green = "\033[0;32m";
	std::string reset = "\033[0m";
	std::string bright = "\033[1m";

	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

	std::cout << green << bright;
	std::cout << "Please type the contact's first name: \n";
	std::getline(std::cin , firstName);
	std::cout << "Please type the contact's last name: \n";
	std::getline(std::cin , lastName);
	std::cout << "Please type the contact's nick name: \n";
	std::getline(std::cin , nickName);
	std::cout << "Please type the contact's phone number: \n";
	std::getline(std::cin , phoneNumber);
	std::cout << "Please type the contact's darkest secrets: \n";
	std::getline(std::cin , darkestSecret);

	if (firstName.size() < 1 || lastName.size() < 1 || nickName.size() < 1
		|| phoneNumber.size() < 1 || darkestSecret.size() < 1)
		std::cout << "A contact cannot have empty fields" << std::endl;
	// this->contacts[this->contactCount++ % 8] =
	// 	Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	// std::cout << std::endl << "Contacts Added Successfully\n";
}

void	PhoneBook::searchContact(void) const
{
	std::cout << "LET'S SEARCH FOR A CONTACT!" << std::endl;
}
