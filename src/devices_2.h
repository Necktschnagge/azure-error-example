#pragma once

#include "devices_1.h"

#include <array>

/*
class devices { // refactor-ready

	computer_power_supply mona_power;

};
*/

template<>
class devices<2> : public devices<1> {
	inline static devices<2>* _instance{ nullptr };
protected:
	devices() { _instance = this; }
public:
	static devices<2>* instance() { return _instance; }
};

