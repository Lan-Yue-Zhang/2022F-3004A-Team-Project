#ifndef SESSION_H
#define SESSION_H
#include <iostream>
#include <string>

using namespace std;

class Session{   
    public:
        //constructor
        Session();
        //destructor
        ~Session();

        //getter
        bool getName();
        void setName(); //Change the amount of power to achieve charging and  power consumption

    private:
        string name;
        Intensity** Intensities;

        
};

#endif