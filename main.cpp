#include <iostream>

#include "PrintBinary.h"
#include "PrintDouble.h"
#include "PrintScientific.h"
#include "BasePrint.h"
#include "BaseFactory.h"
#include "DoubleFactory.h"
#include "ScientificFactory.h"
#include "BinaryFactory.h"
#include "base.h"
#include "Op.h"
#include "VectorContainer.h"
#include "ListContainer.h"

using namespace std;

int main() {
    double k = 9;
    
    Binary* b = new Binary(k);
    b -> print();

    Scientific* s = new Scientific(k);
    s -> print();

    Double* d = new Double(k);
    d -> print();

    DoubleFactory* dF = new DoubleFactory();
    dF -> generatePrint(k);

    ScientificFactory* sF = new ScientificFactory();
    sF -> generatePrint(k);

    BinaryFactory* bF = new BinaryFactory();
    bF -> generatePrint(k);

    Op* A = new Op(2.9);
    Op* B = new Op(3.122852793);
    Op* C = new Op(15);

    ListContainer* v = new ListContainer();

    v -> add_element(A);
    v -> add_element(B);
    v -> add_element(C);

    v -> set_base_factory(new ScientificFactory());
    v -> print();

    return 0;
}