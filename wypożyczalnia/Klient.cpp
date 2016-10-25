/*
 * Klient.cpp
 *
 *  Created on: 25.10.2016
 *      Author: fires
 */

#include "Klient.h"

Klient::Klient() :limit(10) {
	ID = nextID;
	nextID++;
	liczba_klientow++;
	films = new Film[limit];
}

Klient::Klient(int _limit):limit(_limit){
	ID = nextID;
	nextID++;
	liczba_klientow++;
	films = new Film[limit];
}

Klient::Klient(int ilosc, Film* filmy):limit(10){
	if(ilosc > limit){
		throw 2;
	}
	ID = nextID;
	nextID++;
	liczba_klientow++;
	films = new Film[limit];
	for(int i=0; i<ilosc; i++){
		films[i] = filmy[i];
	}
}

Klient::Klient(int _limit, int ilosc, Film* filmy):limit(_limit){
	if(ilosc > limit){
		throw 2;
	}
	ID = nextID;
	nextID++;
	liczba_klientow++;
	films = new Film[limit];
	for(int i=0; i<limit; i++){
		films[i] = filmy[i];
	}
}

Klient::Klient( const Klient &zrodlo):limit(zrodlo.limit){
	ID = nextID;
	nextID++;
	liczba_klientow++;
	films = new Film[limit];
	for(int i=0; i<limit; i++){
		films[i] = zrodlo.films[i];
	}
}

int Klient::getClientID(){
	return ID;
}

int Klient::getClientsCount(){
	return liczba_klientow;
}

void Klient::print(){
	std::cout << "ID: " << ID << '\n' <<
			"Limit: " << limit << '\n' <<
			"Wypozyczone filmy: \n";

	for(int i=0; i<limit; i++){
		std::cout << i << "  ";
		films[i].print();
	}
}



int Klient::nextID = 1;
int Klient::liczba_klientow = 0;
