#ifndef INTENSITY_H
#define INTENSITY_H
#include <iostream>
#include <string>

using namespace std;

class Intensity{   
    public:
        //constructor
        Intensity(int );
        //destructor
        ~Intensity();

        //getter
        bool getlevel();
        void setlevel(int ); 

        //other
        void print();
    private:
        int level;
        bool Be_selected;

        
};

#endif
