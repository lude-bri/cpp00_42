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

int	main()
{
	//eu tenho que ter dois objetos (uma instancia de phone e contacts)
	//primeiro, ao iniciar o programa eu tenho que dizer um welcome
	//e explicar as regras
	//depois, abro o prompt para uma das opcoes: ADD, SEARCH, EXIT
	
	PhoneBook	bowserbook;

	bowserbook.startPhonebook();
	return (0);
}
