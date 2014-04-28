/*
 * author Andrew Tilisky
 */

#ifndef JSONVALUE_HPP
#define JSONVALUE_HPP

#include <iostream>

#include "jsonvalue.hpp"

using std::string;

class JsonValue {
public:
	JsonValue();
	JsonValue(const string value);
	virtual const string representation() const = 0;
	virtual void print() const = 0;
	virtual ~JsonValue() = 0;
private:
};

#endif // JSONVALUE_HPP
