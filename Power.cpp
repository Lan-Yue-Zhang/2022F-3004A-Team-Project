#include <iostream>
using namespace std;
#include <string>

#include "Power.h"

//constructor
Power::Power(int i){
    id=i;
}

//destructor
Power::~Power(){
    cout<<" "<<endl;
}

//getter and setter
void Power::setBattery(int n){battery=n;}
int  Power::getBattery(){return battery;}


//If the battery is less than 20, it returns true. it says the current is low power.
bool Power::check(){
    if(battery<20){
        return true;
    }else{
        return false;
    }
}