/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:03:15 by lude-bri          #+#    #+#             */
/*   Updated: 2025/03/27 09:40:49 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		std::string	line;

		//transforms char ** into char * with appending
		for (int i = 1; i < ac; i++)
			line = line.append(av[i]).append(" ");

		//capitalize all char
		for (std::size_t i = 0; i < line.length(); i++)
			line[i] = std::toupper(line[i]);

		std::cout << line << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEAREABLE FEEDBACK NOISE *\n";
}
