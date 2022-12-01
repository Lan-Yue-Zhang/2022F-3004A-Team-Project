#include <iostream>
using namespace std;
#include <string>

#include "Session.h"

//constructor
Session::Session(const string& n){
    name=n;
    Intensities= new Intensity*[8];
}

//destructor
Session::~Session(){
    cout<<" "<<endl;
}

//getter
void Session::setName(string n){name=n;}
const string& Session::getName(){return name;}

