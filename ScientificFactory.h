#ifndef ___SCIENTIFICFACTORY_H___
#define ___SCIENTIFICFACTORY_H___

#include <iostream>

#include "BaseFactory.h"
#include "PrintScientific.h"

using namespace std;

class ScientificFactory : public BaseFactory {
    public:
        ScientificFactory() : BaseFactory() {};
    
        BasePrint* generatePrint(double value) {
            Scientific* b = new Scientific(value);
            b -> print();
            return b;
        };
};

#endif //___SCIENTIFICFACTORY_H___