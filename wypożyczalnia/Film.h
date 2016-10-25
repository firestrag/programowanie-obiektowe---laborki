/*
 * Film.h
 *
 *  Created on: 25.10.2016
 *      Author: fires
 */

#ifndef FILM_H_
#define FILM_H_

#include <string>
#include <iostream>

class Film {
public:

	std::string tytul;
	    std::string rezyser;
	    int czas_trwania;   /// w sekundach

	public:

	    Film();
	    Film(std::string, std::string, int);

	    void operator=(const &Film);

	    void print();


};

#endif /* FILM_H_ */
