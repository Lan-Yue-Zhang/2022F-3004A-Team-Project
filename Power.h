#ifndef POWER_H
#define POWER_H
#include <iostream>
#include <string>

using namespace std;

class Power{   
    public:
        //constructor
        Power(int );
        //destructor
        ~Power();

        //getter
        int getBattery();
        void setBattery(int); //Change the amount of power to achieve charging and  power consumption
        bool check();
    
        //other
        void print();
    private:
        int battery=100;
        int id ;
        
};

#endif

