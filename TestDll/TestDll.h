#pragma once

class TestDllWrapper {
public:
	virtual ~TestDllWrapper() {};
	virtual void TestMethod() = 0;
};

class TestDll : public TestDllWrapper {
public:
	TestDll();
	virtual ~TestDll();
	virtual void TestMethod();
};