#ifndef ___BINARYFACTORY_H___
#define ___BINARYFACTORY_H___

#include <iostream>

#include "BaseFactory.h"
#include "PrintBinary.h"

using namespace std;

class BinaryFactory : public BaseFactory {
    public:
        BinaryFactory() : BaseFactory() {};
    
        BasePrint* generatePrint(double value) {
            Binary* b = new Binary(value);
            b -> print();
            return b;
        };
};

#endif //___BINARYFACTORY_H___