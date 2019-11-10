#ifndef ____LISTCONTAINER_H___
#define ____LISTCONTAINER_H___

#include "Container.h"
#include <cstring>
#include <list>

using namespace std;

class ListContainer : public Container {
    protected:
        list <Base*> li;

    public:
        ListContainer() : Container() {};
        ListContainer(BaseFactory* base) : Container(base) {};
        
        void add_element(Base* element) {
            li.push_back(element);
        };

        void print() {
            for (list <Base*> p = li; !p.empty(); p.pop_front()) {
                Base_Factory -> generatePrint(p.front() -> evaluate());
            }  
        };
};

#endif //____LISTCONTAINER_H___        
 
