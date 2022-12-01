#ifndef INTENSITY_H
#define INTENSITY_H
#include <iostream>
#include <string>

using namespace std;

class Intensity{   
    public:
        //constructor
        Intensity();
        //destructor
        ~Intensity();

        //getter
        bool getName();
        void setName(); //Change the amount of power to achieve charging and  power consumption

        //other
        void print();
    private:
        string name;
        bool Be_selected;

        
};

#endif