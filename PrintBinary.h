#ifndef ___PRINTBINARY_H__
#define ___PRINTBINARY_H__

#include <iostream>
#include <bitset>

#include "BasePrint.h"

using namespace std;

class Binary : public BasePrint {
    public: 
        /* Constructors */
        Binary() : BasePrint(0) {};
        Binary(double value) : BasePrint(value) {};

        void print() {
            bitset<32> b (value);
            cout <<  b << endl;
        };
};

#endif //___PRINTBINARY_H__
