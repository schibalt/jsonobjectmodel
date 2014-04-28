/*
 * author Andrew Tilisky
 */

#ifndef JSONNUMBER_HPP
#define JSONNUMBER_HPP

#include <iostream>
#include <sstream>
#include <stdlib.h>     /* atof */

using std::string;
using std::stringstream;

class JsonNumber: public JsonValue {
public:
	JsonNumber();
	JsonNumber(const string value);
	JsonNumber(const double value);
private:
	string _value;
	const double parse(const string value) const;
};

#endif // JSONNUMBER_HPP