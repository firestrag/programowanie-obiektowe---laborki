/*
 * Film.cpp
 *
 *  Created on: 25.10.2016
 *      Author: fires
 */

#include "Film.h"

Film::Film(){
    tytul = "tytul";
    rezyser = "rezyser";
    czas_trwania = 1.5*60*60 +1;
};

Film::Film(std::string tytul, std::string rezyser, int czas_trwania){
    this->tytul = tytul;
    this->rezyser = rezyser;

    if( czas_trwania < 0){
        throw 1;
    }

    this->czas_trwania = czas_trwania;
};

void Film::print(){
    int czas = this->czas_trwania;
    int sekundy = czas % 60;
    czas /= 60;
    int minuty = czas % 60;
    czas /= 60;

    std::cout << "Rezyser: " << rezyser << "  tytul: " << tytul << "  czas trwania: " << czas << "h " << minuty << "min " << sekundy << "s\n";
};
