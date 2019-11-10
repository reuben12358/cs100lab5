#ifndef ___PRINTDOUBLE_H__
#define ___PRINTDOUBLE_H__

#include <iostream>
#include "BasePrint.h"

using namespace std;

class Double : public BasePrint {
    public: 
        /* Constructors */
        Double() : BasePrint(0) {};
        Double(double value) : BasePrint(value) {};

        void print() {
            cout <<  value << endl;
        };
};

#endif //___PRINTDOUBLE_H__
