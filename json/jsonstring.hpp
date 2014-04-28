/*
 * author Andrew Tilisky
 */

#ifndef JSONSTRING_HPP
#define JSONSTRING_HPP

#include <iostream>

#include "jsonvalue.hpp"

using std::string;

class JsonString: public JsonValue {
public:
	JsonString();
	JsonString(const string value);
private:
	string _value;
};

#endif // JSONSTRING_HPP