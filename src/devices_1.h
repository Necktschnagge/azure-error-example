#pragma once

#include "button_array_1234.h"
#include "devices.h"
#include "requirements_manager.h"
#include "pin_config.h"

template<>
class devices<1> : public devices<0> {
	inline static devices<1>* _instance{ nullptr };
	managed_power_supply _main_power{ general_power_supply(std::make_unique<general_iopin>(pin_id::power_force), std::make_unique<inverse_iopin>(pin_id::power_check)) };
	button_array_1234 _button_array;

protected:
	devices() { _instance = this; }
public:
	managed_power_supply& main_power() { return _main_power; }
	button_array_1234& button_array() { return _button_array; }

	static devices<1>* instance() { return _instance; }
};
