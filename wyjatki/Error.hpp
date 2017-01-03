class Error{

    string error;


public:
    Error(string e){
        error = e;
    };

    void what(){
        cout << error << endl;
    }
};
