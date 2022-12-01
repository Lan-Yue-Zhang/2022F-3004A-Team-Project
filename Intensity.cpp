#include <iostream>
using namespace std;
#include <string>

#include "Intensity.h"

//constructor
Intensity::Intensity(int n){
    level=n;
    Be_selected=false;
}

//destructor
Intensity::~Intensity(){
    cout<<" "<<endl;
}

//getter
void Intensity::setlevel(int n){level=n;}
int Intensity::getlevel(){return level;}

void Intensity::setBe_selected(bool n){Be_selected=n;}
bool Intensity::getBe_selected(){return Be_selected;}
