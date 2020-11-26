#pragma once

#include "devices_1.h"
#include "driver_distcon.h"

#include <array>

/*
class devices { // refactor-ready

	computer_power_supply mona_power;

};
*/

template<>
class devices<2> : public devices<1> {
	inline static devices<2>* _instance{ nullptr };
	distcon_device _distcon{ std::make_unique<inverse_iopin>(pin_id::distcon_data), std::make_unique<inverse_iopin>(pin_id::distcon_clock) };
protected:
	devices() { _instance = this; }
public:
	distcon_device& distcon() { return _distcon; }
	static devices<2>* instance() { return _instance; }
};

