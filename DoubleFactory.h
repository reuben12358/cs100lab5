#ifndef ___DOUBLEFACTORY_H___
#define ___DOUBLEFACTORY_H___

#include <iostream>

#include "BaseFactory.h"
#include "PrintDouble.h"

using namespace std;

class DoubleFactory : public BaseFactory {
    public:
        DoubleFactory() : BaseFactory() {};
    
        BasePrint* generatePrint(double value) {
            Double* b = new Double(value);
            b -> print();
            return b;
        };
};

#endif //___DOUBLEFACTORY_H___