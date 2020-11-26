#pragma once

#include "devices.h"

template<>
class devices<1> : public devices<0> {
	inline static devices<1>* _instance{ nullptr };

protected:
	devices() { _instance = this; }
public:

	static devices<1>* instance() { return _instance; }
};
