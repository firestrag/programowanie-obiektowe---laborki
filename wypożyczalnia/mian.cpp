/*
 * mian.cpp
 *
 *  Created on: 25.10.2016
 *      Author: fires
 */

#include "header.hpp"



int main(){
//	Film film0;
//	film0.print();
//
//	Klient klient0;
//	Klient klient1;
//
//
//	std::cout << klient0.getClientID() << "\n" << klient0.getClientsCount() << std::endl;
//
//	klient0.print();

	Klient klient1;
	std::cout << "\n\n\nKlient1:\n";
	klient1.print();

	Film films[20];
	Klient klient2(20, 20, films);
	std::cout << "\n\n\nKlient2:\n";
	klient2.print();

	Klient klient3(klient2);
	std::cout << "\n\n\nKlient3:\n";
	klient3.print();

	Klient klienci[100];
	Klient kliencie_mega[1000](1000);

	return 0;
}
