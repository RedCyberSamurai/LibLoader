# LibLoader (C++ Windows)

## Getting started
+ Add __LibLoader.h__ to your project and here we go...

## Parameters
+ LibLoader\<**T**\>(const wchar_t *__dllPath__, [_optional_] const char *__exportFunctionName__)
+ __T__ matches your library class

## Usage
+ Use LibLoader::__GetModule()__ to retrieve the pointer of type __T__
+ Look inside the **TestApplication** and **TestDll** projects for more details