#pragma once

template<unsigned int level>
class devices;


template<>
class devices<0> {
	inline static devices<0>* _instance{ nullptr };
protected:
	devices() { _instance = this; }
public:
	devices(const devices&) = delete; // write test that children inherit the property that they cannot copy-create!
	// write some logic in this class that there can only be one object of it. check that creating children class object also triggers that check!

	static devices<0>* instance() { return _instance; }
};
