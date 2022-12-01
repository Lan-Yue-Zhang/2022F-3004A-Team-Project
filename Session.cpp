#include <iostream>
using namespace std;
#include <string>

#include "Session.h"

//constructor
Session::Session(int n){
    time=n;
    Intensities= new Intensity*[8];
}

//destructor
Session::~Session(){
    cout<<" "<<endl;
}

//getter
void Session::setTime(int n){time=n;}
int Session::getTime(){return time;}
