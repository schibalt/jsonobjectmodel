/*
 * author Andrew Tilisky
 */

#ifndef JSONARRAY_HPP
#define JSONARRAY_HPP

#include "jsonvalue.hpp"

#include <map>

using std::map;
using std::string;

class JsonArray {
public:
	JsonArray(string json_array_string);
	void AssignValue(const string, const JsonValue*);
private:
	map<string, JsonValue*> members;
};

#endif // JSONARRAY_HPP
