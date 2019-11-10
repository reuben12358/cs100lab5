#ifndef ___CONTAINER_H___
#define ___CONTAINER_H___

#include "base.h"
#include "BaseFactory.h"

using namespace std;

class Container {
    protected:
        BaseFactory* Base_Factory;

    public:
	    /* Constructors */
        Container() : Base_Factory(NULL){};
        Container(BaseFactory* base) : Base_Factory(base) {};

        /* Non Virtual Functions */
        void set_base_factory(BaseFactory* base) {
            Base_Factory = base;
        }; // set the type of factory to be used

        /* Pure Virtual Functions */
	    // push the top pointer of the tree into container
        virtual void add_element(Base* element) = 0;
        // iterate through trees and output values
        virtual void print() = 0;
};

#endif //___CONTAINER_H___