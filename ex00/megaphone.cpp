/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wati-Theo <wati-theo@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:24:41 by Wati-Theo         #+#    #+#             */
/*   Updated: 2022/11/03 04:03:22 by Wati-Theo        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char *agrv[]){

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		int	j = 0;
		while (agrv[i][j])
		{
			std::cout << (char) toupper((int) agrv[i][j]);
			j++;
		}
	}
	std::cout << std::endl;
	return 0;
}
