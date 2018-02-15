#include "./../LibLoader/LibLoader.h"
#include "./../TestDll/TestDll.h"

int main()
{
	// Load library
	auto loader = LibLoader<TestDll>(L"TestDll.dll");
	TestDll *testDll = loader.GetModule();

	// Use class methods
	testDll->TestMethod();

	// Free memory
	delete[] testDll;
	testDll = nullptr;


	std::cin.get();
    return 0;
}