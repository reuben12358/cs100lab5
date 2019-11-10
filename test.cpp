#include <iostream>
#include <cmath>
#include "BasePrint.h"
#include "PrintDouble.h"
#include "PrintBinary.h"
#include "PrintScientific.h"

#include "BaseFactory.h"
#include "DoubleFactory.h"
#include "ScientificFactory.h"
#include "BinaryFactory.h"

#include "gtest/gtest.h"

using namespace std;

//DoublePrint Tests
TEST(PrintDouble, DoubleVal) {
	Double* x = new Double(9.9);
	testing::internal::CaptureStdout();
	x->print();
	string result = testing::internal::GetCapturedStdout();
	EXPECT_EQ(result, "9.9");
}

//Binary Print test		
TEST(PrintBinary, OneVal) {		
	Binary* x = new Binary(1);
	testing::internal::CaptureStdout();
	x->print();
	string result = testing::internal::GetCapturedStdout();
	EXPECT_EQ(result, "0000000000000001");
}		
																	
char* flag;	
//DoubleFactory tests
TEST(Factory, FactoryTest) {
	if(flag == "d") {
		/*BaseFactory* factory = new DoubleFactory;
		BasePrint* obj = factory->generatePrint(-3.333);
		testing::internal::CaptureStdout();
		obj->print();
		string result = testing::internal::GetCapturedStdout();

		EXPECT_EQ(result, "-3.333");*/
		List* list = new List();
		Vector* vec = new Vector();

		cout << "Set the single factory to a DoubleFactory" << endl << endl;
		list->set_factory(new DoubleFactory);
		vec->set_factory(new DoubleFactory);
		
		list->add_element(new Op(16));
		list->add_element(new Op(32));
		list->add_element(new Op(5));
		list->add_element(new Op(10006.5));
		vec->add_element(new Op(5006.4));
		vec->add_element(new Op(6.51));
		vec->add_element(new Op(696.453));
		vec->add_element(new Op (1.24));


		testing::internal::CaptureStdout();
		list->print();
		vec->print();
		string output = testing::internal::GetCapturedStdout();

		EXPECT_EQ("16 32 5 10006.5 5006.4 6.51 696.453 1.24 ", output);
	}
	else if(flag == "b") {
		/*BaseFactory* factory = new BinaryFactory;
		BasePrint* obj = factory->generatePrint(-3.0);
		testing::internal::CaptureStdout();
		obj->print();
		string result = testing::internal::GetCapturedStdout();
		
		EXPECT_EQ(result, "1111111111111101");*/
		List* list = new List();
		Vector* vec = new Vector();

		cout << "Set the single factory to a BinaryFactory" << endl << endl;
		list->set_factory(new BinaryFactory);
		vec->set_factory(new BinaryFactory);
		
		list->add_element(new Op(16));
		list->add_element(new Op(32));
		list->add_element(new Op(5));
		vec->add_element(new Op(16));
		vec->add_element(new Op(32));
		vec->add_element(new Op(5));

		testing::internal::CaptureStdout();
		list->print();
		vec->print();
		string output = testing::internal::GetCapturedStdout();

		EXPECT_EQ("0000000000010000 0000000000100000 0000000000000101 0000000000010000 0000000000100000 0000000000000101", output);
	}
	else if(flag == "h") {
		/*BaseFactory* factory = new HexFactory;
		BasePrint* obj = factory->generatePrint(255.378);
		testing::internal::CaptureStdout();
		obj->print();
		string result = testing::internal::GetCapturedStdout();
		
		EXPECT_EQ(result, "2.553780e+02");*/
		List* list = new List();
		Vector* vec = new Vector();
		cout << "Set the single factory to a HexFactory" << endl << endl;
		list->set_factory(new HexFactory);
		vec->set_factory(new HexFactory);
		
		list->add_element(new Op(16));
		list->add_element(new Op(32));
		list->add_element(new Op(5));
		list->add_element(new Op(10006.5));
		vec->add_element(new Op(5006.4));
		vec->add_element(new Op(6.51));
		vec->add_element(new Op(696.453));
		vec->add_element(new Op (1.24));

		testing::internal::CaptureStdout();
		list->print();
		vec->print();
		string output = testing::internal::GetCapturedStdout();
		
		EXPECT_EQ("1.600000e+01 3.200000e+01 5.000000e+00 1.000650e+04 5.006400e+03 6.510000e+00 6.964530e+02 1.240000e+00 ", output);
	}	
}

//SCIENTIFIC TESTS
TEST(PrintScientific, DoubleVal) {
	Scientific* x = new Scientific(2006);
	testing::internal::CaptureStdout();
	x->print();
	string result = testing::internal::GetCapturedStdout();
	EXPECT_EQ(result, "2.006000e+03");
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	flag = argv[1];
	cout << flag << endl;
	if(flag == 0) {
		return -1;
	}
	return RUN_ALL_TESTS();
}
