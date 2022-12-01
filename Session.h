#ifndef SESSION_H
#define SESSION_H
#include <iostream>
#include <string>

using namespace std;

class Session{   
    public:
        //constructor
        Session(int);
        //destructor
        ~Session();

        //getter
        bool getTime();
        void setTime(int);

    private:
        int time;
        Intensity** Intensities;

        
};

#endif
