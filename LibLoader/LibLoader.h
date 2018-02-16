#pragma once

#include <windows.h>

template<class T>
class LibLoader {
private:
	typedef T *(*ProcFunc)();
	HINSTANCE hDLL;
	T *module;
public:
	LibLoader(const wchar_t *dll) : LibLoader(dll, "GetModule") {}
	LibLoader(const wchar_t *dll, const char *func) {
		this->hDLL = LoadLibrary(dll);
		if (!hDLL) {
			throw std::exception("Unable to load the dll.");
			return;
		}

		ProcFunc procFunc = (ProcFunc)GetProcAddress(hDLL, func);
		this->module = procFunc();
		if (this->module == nullptr) {
			throw std::exception("Unable to load the module class.");
			return;
		}
	}
	~LibLoader() {
		FreeLibrary(this->hDLL);
	}

	T *GetModule() {
		return this->module;
	}
};