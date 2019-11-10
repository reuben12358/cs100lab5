#ifndef ___BASEPRINT_H__
#define ___BASEPRINT_H__

#include <iostream>

using namespace std;

class BasePrint {
	protected:
		/* Value to Print */
		double value;

	public:
		/* Constructors */
		BasePrint() : value(0) {};
		BasePrint(double value) : value(value) {};
		
		/* Pure Virtual Print Function */
		virtual void print() = 0;
};

#endif //___BASEPRINT_H__