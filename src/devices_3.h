#pragma once

#include "devices_2.h"

template<>
class devices<3> : public  devices<2> {
	inline static devices<3>* _instance{ nullptr };
public:
	devices() { _instance = this; }
	static devices<3>* instance() { return _instance; }
};

