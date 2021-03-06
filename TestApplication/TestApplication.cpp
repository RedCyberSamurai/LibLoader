#include <iostream>
#include "./../LibLoader/LibLoader.h"
#include "./../TestDll/TestDll.h"
#include <memory>

int main()
{
	// Load library
	auto loader = LibLoader<TestDll>(L"TestDll.dll");

	{
		// Load object pointer
		std::unique_ptr<TestDll> testDll(loader.GetModule());
		// Use class methods
		testDll->TestMethod();
	}

	std::cin.get();
	return 0;
}