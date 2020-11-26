#pragma once

#include "computer_power_supply.h"
#include "devices_2.h"

template<>
class devices<3> : public  devices<2> {
	inline static devices<3>* _instance{ nullptr };
	computer_power_supply _mona_power{ std::make_unique<general_iopin>(pin_id::mona_power_button), std::make_unique<inverse_iopin>(pin_id::mona_power_check) };
public:
	devices() { _instance = this; }
	computer_power_supply& mona_power() { return _mona_power; }
	static devices<3>* instance() { return _instance; }
};

