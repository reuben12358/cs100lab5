#ifndef ___BASEFACTORY_H__
#define ___BASEFACTORY_H__

#include <iostream>
#include "BasePrint.h"

using namespace std;

class BaseFactory {
	public:
		/* Constructor */
		BaseFactory() {};

		/* Pure Virtual Generate Function */
		virtual BasePrint* generatePrint(double value) = 0;
};

#endif //___BASEFACTORY_H__