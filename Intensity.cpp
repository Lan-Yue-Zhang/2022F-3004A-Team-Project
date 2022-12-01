#include <iostream>
using namespace std;
#include <string>

#include "Intensity.h"

//constructor
Intensity::Intensity(const string& n){
    name=n;
    Be_selected=false;
}

//destructor
Intensity::~Intensity(){
    cout<<" "<<endl;
}

//getter
void Intensity::setName(string n){name=n;}
const string& Intensity::getName(){return name;}

void Intensity::setBe_selected(bool n){Be_selected=n;}
bool Intensity::getBe_selected(){return Be_selected;}