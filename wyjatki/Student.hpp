class Student{
    string imie="";
    string nazwisko="";
    int rok=0;
    string kierunek="";
    double ocena=0.;

public:
    void setImie(string _imie){
        for(int i=0; i<_imie.size(); i++){
            if( ( _imie[i] < 'A') || (_imie[i] > 'Z' && _imie[i] < 'a') || (_imie[i] > 'z') ){
                Error e("Niedozwolone znaki w imieniu.");
                throw e;
            }
        }
        imie = _imie;
    }

    /// przepuszcza pusty ciąg :/
    void setNazwisko(string _nazwisko){
        for(int i=0; i<_nazwisko.size(); i++){
            if( (_nazwisko[i] < ' ') || (_nazwisko[i] > ' ' && _nazwisko[i] < '-') || (_nazwisko[i] > '-' && _nazwisko[i] < 'A')
               || (_nazwisko[i] > 'Z' && _nazwisko[i] < 'a') || (_nazwisko[i] > 'z') ){
                    Error e("Niedozwolone znaki w nazwisku.");
                    throw e;
               }
        }
        nazwisko = _nazwisko;
    }

    void setRok( int _rok ){
        if( _rok > 0 && _rok <= 8 ){
            rok = _rok;
            return;
        }
        Error e("Nieprawidłowy rok.");
        throw e;
    }

    void setKierunek( string _kierunek ){
        for(int i=0; i<_kierunek.size(); i++){
            if( (_kierunek[i] < ' ') || (_kierunek[i] > ' ' && _kierunek[i] < 'A')
               || (_kierunek[i] > 'Z' && _kierunek[i] < 'a') || (_kierunek[i] > 'z') ){
                    Error e("Niedozwolone znaki w nazwie kierunku.");
                    throw e;
               }
        }
        kierunek = _kierunek;
    }

    void setOcena( double _ocena ){
        //if( 2.0 == _ocena || 2.5 == _ocena || 3.0 == _ocena || 3.5 == _ocena || 4.0 == _ocena || 4.5 == _ocena || 5.0 == _ocena ){
        if( _ocena >= 2.0 && _ocena <= 5.0){
            ocena = _ocena;
            return;
        }
        Error e("Nieprawidłowa ocena.");
        throw e;
    }

    void wypisz(){
        cout << imie << " " << nazwisko << " " << rok << " " << kierunek << " " << ocena << endl;
    }

    string getSaveData(){

        string _rok = to_string( rok );

        string _ocena;
        if( 2.0 == ocena){
            _ocena = "2.0";
        }else if( 2.5 == ocena ){
            _ocena = "2.5";
        }else if( 3.0 == ocena ){
            _ocena = "3.0";
        }else if( 3.5 == ocena ){
            _ocena = "3.5";
        }else if( 4.0 == ocena ){
            _ocena = "4.0";
        }else if( 4.5 == ocena ){
            _ocena = "4.5";
        }else if( 5.0 == ocena ){
            _ocena = "5.0";
        }

        string ret = "";
        ret += imie + ", " + nazwisko + ", "
        + _rok + ", " +
        kierunek + _ocena + "\n";

        return ret;
    }
};
