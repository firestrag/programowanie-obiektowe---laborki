/*
 * Klient.h
 *
 *  Created on: 25.10.2016
 *      Author: fires
 */

#ifndef KLIENT_H_
#define KLIENT_H_

#include "Film.h"


class Klient {

	int ID;
	Film* films;


	const int limit;
	static int nextID;
	static int liczba_klientow;

public:
	Klient();
	Klient(int);	/// limit
	Klient(int, Film*);	/// ilo��, tablica film�w
	Klient(int, int, Film*);	/// limit, ilo��, tablica film�w
	Klient( const Klient& );


	int getClientID();
	int getClientsCount();

	void print();
};



#endif /* KLIENT_H_ */
