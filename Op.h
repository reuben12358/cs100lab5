#ifndef ______OP_H___
#define ______OP_H___

#include "base.h"

class Op : public Base{
    private:
        double number;

    public:
        /* Constructors */
        Op() : number(0) {};
        Op(double a) : number(a) {};

        double evaluate() {
            return number;
        };   
};

#endif // !______OP_H___

