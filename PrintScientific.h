#ifndef ___PRINTSCIENTIFIC_H__
#define ___PRINTSCIENTIFIC_H__

#include <iostream>
#include "BasePrint.h"

using namespace std;

class Scientific : public BasePrint {
    public: 
        /* Constructors */
        Scientific() : BasePrint(0) {};
        Scientific(double value) : BasePrint(value) {};

        void print() {
            cout << scientific << value << endl;
        };
};

#endif //___PRINTSCIENTIFIC_H__