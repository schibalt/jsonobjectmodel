/*
 * author Andrew Tilisky
 */

#include "jsonnumber.hpp"

JsonNumber::JsonNumber() {
	_value = "";
}

JsonNumber::JsonNumber(const string string_representation) {
	_value = string_representation;
}

JsonNumber::JsonNumber(const double value) {
	std::ostringstream ss;
	ss << value;
	_value(ss.str());
}

//http://stackoverflow.com/questions/1012571/stdstring-to-float-or-double
const double JsonNumber::parse() const {
	return ::atof(_value.c_str());
}

const string JsonNumber::representation() const {
	return _value;
}
