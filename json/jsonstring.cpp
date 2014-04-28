/*
 * author Andrew Tilisky
 */

#include "jsonstring.hpp"

JsonString::JsonString() {
	_value = "\"\"";
}

JsonString::JsonString(const string value) {
	_value = value;
}
