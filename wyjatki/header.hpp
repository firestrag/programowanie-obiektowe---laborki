#include <iostream>
#include <string>
#include <fstream>
//#include <cstdio>
#include <cstdlib>
#define ax cout <<\
 "Specjalne pozdrowienia\
 dla Uli!!!" << endl;
using namespace std;

string to_string( int a ){
    string ret = "";

    while( a > 0){
        int b = a%10;
        char c = b+48;
        string d;
        d = c;
        ret = c+ret;

        a/=10;
    }
    return ret;
}

#include "Error.hpp"
#include "Student.hpp"
