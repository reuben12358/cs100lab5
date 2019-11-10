#ifndef ____VECTORCONTAINER_H___
#define ____VECTORCONTAINER_H___

#include "Container.h"
#include <cstring>
#include <vector>

using namespace std;

class VectorContainer : public Container {
    protected:
        vector <Base*> v;

    public:
        VectorContainer() : Container() {};
        VectorContainer(BaseFactory* base) : Container(base) {};
        
        void add_element(Base* element) {
            v.push_back(element);
        };

        void print() {
            for (int i = 0; i < v.size(); ++i) {
                Base_Factory -> generatePrint(v.at(i) -> evaluate());
            }  
        };
};

#endif //____VECTORCONTAINER_H___        
 
