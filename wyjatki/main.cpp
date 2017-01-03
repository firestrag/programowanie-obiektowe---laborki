#include "header.hpp"

Student *S;
int il = 0;

void wczytajOdUzytkownikaJednegoStudenta( Student& S){

    bool repeat = false;
    string dane;

    do{
        cout << "Podaj imi�: ";
        getline(cin, dane);
        try{
            S.setImie( dane );
            repeat = false;
        }catch( Error &e){
            e.what();
            repeat = true;
        }catch(...){
            cout << "Z�e dane - wyj�ttek nieznany\n";
            repeat = true;
        }
    }while( repeat );

    /// wczytywanie nazwiska
    do{
        cout << "Podaj nazwisko: ";
        getline(cin, dane);
        try{
            S.setNazwisko( dane );
            repeat = false;
        }catch( Error &e){
            e.what();
            repeat = true;
        }catch(...){
            cout << "Z�e dane - wyj�ttek nieznany\n";
            repeat = true;
        }
    }while( repeat );

    /// wczytywanie roku
    do{
        cout << "Podaj rok studi�w: ";
        getline(cin, dane);
        try{
            S.setRok( atoi(dane.c_str()) );
            repeat = false;
        }catch( Error &e){
            e.what();
            repeat = true;
        }catch(...){
            cout << "Z�e dane - wyj�ttek nieznany\n";
            repeat = true;
        }
    }while( repeat );

    /// wczytywanie kierunku
    do{
        cout << "Podaj kierunekstudi�w: ";
        getline(cin, dane);
        try{
            S.setKierunek( dane );
            repeat = false;
        }catch( Error &e){
            e.what();
            repeat = true;
        }catch(...){
            cout << "Z�e dane - wyj�ttek nieznany\n";
            repeat = true;
        }
    }while( repeat );

     /// wczytywanie roku
    do{
        cout << "Podaj ocen�: ";
        getline(cin, dane);
        try{
            S.setOcena( atof(dane.c_str()) );
            repeat = false;
        }catch( Error &e){
            e.what();
            repeat = true;
        }catch(...){
            cout << "Z�e dane - wyj�ttek nieznany\n";
            repeat = true;
        }
    }while( repeat );
}

void save(int ilosc){
    string save_data = "";
    for(int i=0; i<ilosc; i++){
        save_data += S[i].getSaveData();
    }

    string path = "";
    bool repeat = false;
    fstream file;
    do{
        repeat = false;
        cout << "Podaj nazw� pliku:";
        cin >> path;
        try{
            file.open( path.c_str(), ios::out);
        }catch( ... ){
            cerr << "B��dna nazwa pliku\n";
            repeat = true;
        }
    }while( repeat );

    file << save_data;
    file.close();
}

void wczytajStudentow(){
    delete[] S;
    bool repeat = false;
    string data;

    do{
        repeat = false;
        cout << "Podaj ilosc studentow: ";

        getline(cin, data);

        for(int i=0; i<data.size(); i++){
            if( data[i] < '0' || data[i] > '9'){
                repeat = true;
            }
        }

        if( repeat ){
            cout << "nieprawid�owa liczba student�w\n";
        }

    }while(repeat);

    int liczba = atoi( data.c_str() );
    il = liczba;
    //cout << liczba << endl;

    S = new Student[liczba];

    for(int i=0; i<liczba; i++){
        wczytajOdUzytkownikaJednegoStudenta( S[i] );
    }



}

void wypisz(){
    for(int i=0; i<il; i++){
        S[i].wypisz();
    }
}

void menu(){
    bool repeat = true;
    do{
        repeat = true;
        cout << "Podaj:\n"
            << "1 - aby wprowadzi� student�w \n"
            //<< "2 - aby wy�wietli� zawarto�� pliku\n"
            << "3 - aby wypisa� studentw�w\n"
            << "0 - aby zako�czy� dzia�anie programu\n";
        string data;
        getline(cin, data);
        if( "0" == data){
            //cout << "Specjalne pozdrowienia dla Uli!!!" << endl;
            ax
            return;
        }else if("1" == data){
            wczytajStudentow();
        }else if("3" == data){
            wypisz();
        }else{
            repeat = true;
            cout << "nieprawid�owa opcja\n";
        }
    }while( repeat );
}




int main(){

    setlocale(LC_ALL,"");
    menu();


    /*Student S[10];
    for(int i=0; i<2; i++){
        wczytajOdUzytkownikaJednegoStudenta( S[i] );
    }
    S[1].wypisz();*/

    //S.wypisz();

    /// wczytywanie imienia



    return 0;
}

