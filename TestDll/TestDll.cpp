#include "TestDll.h"
#include <iostream>

TestDll::TestDll() {
	std::cout << "TestDll ctor executed..." << std::endl;
}

TestDll::~TestDll() {
	std::cout << "TestDll dtor executed..." << std::endl;
}

void TestDll::TestMethod() {
	std::cout << "TestDll TestMethod executed..." << std::endl;
}