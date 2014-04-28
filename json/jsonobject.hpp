/*
 * author Andrew Tilisky
 */

#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <tr1/unordered_map>
#include <iostream>

#include "jsonvalue.hpp"

using std::string;
using std::tr1::unordered_map;
using std::cout;
using std::endl;

class JsonObject: public JsonValue {
public:
	JsonObject();
	JsonObject(string json_string);
	void AssignValue(const string, const JsonValue*);
	void print() const;
	const string representation() const;
private:
	unordered_map<string, JsonValue*> members;
};

#endif // OBJECT_HPP
