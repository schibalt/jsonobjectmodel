/*
 * author Andrew Tilisky
 */

#include "jsonobject.hpp"

JsonObject::JsonObject() {
}

JsonObject::JsonObject(string json_string) {
}

void AssignValue(const string name, const JsonValue* value) {

}

void JsonObject::print() const {
	cout << '{' << endl;

	for (auto it = members.begin(); it != members.end(); ++it)
		cout << "" "" << it->first << "" " :" << it->second;

	cout << endl << '}' << endl;
}

const string JsonObject::representation() const {
	string representation = string("{");

	for (auto it = members.begin(); it != members.end(); ++it)
		representation + "" "" + it->first + "" " :" + it->second;

	return representation += string("}");
}
