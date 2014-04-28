/*
 * author Andrew Tilisky
 */

#include <iostream>
#include <cstdio>
#include <exception>

//#include "jsonarray.hpp"
//#include "jsonnumber.hpp"
#include "jsonobject.hpp"
//#include "jsonstring.hpp"

using std::cout;
using std::exception;

bool WikipediaObjectString() {
	try {
		string wikipedia_example_string = string("{")
				+ "\"firstName\": \"John\"," + "\"lastName\": \"Smith\","
				+ "\"age\": 25," + "\"address\": {"
				+ "\"streetAddress\": \"21 2nd Street\","
				+ "\"city\": \"New York\"," + "\"state\": \"NY\","
				+ "\"postalCode\": \"10021\"" + "}," + "\"phoneNumber\": ["
				+ "{" + "\"type\": \"home\"," + "\"number\": \"212 555-1234\""
				+ "}," + "{" + "\"type\": \"fax\","
				+ "\"number\": \"646 555-4567\"" + "}" + "]," + "\"gender\":{"
				+ "\"type\":\"male\"" + "}" + "}";
		//    cout << full_test_string << endl;
		JsonObject wikipeda_example_object(wikipedia_example_string);
	} catch (exception& e) {
		cout << e.what() << '\n';
		return true;
	}
	return false;
}

bool EmptyObjects() {
	try {
		JsonObject empty_object();
//		empty_object.
	} catch (exception& e) {
		cout << e.what() << '\n';
		return true;
	}
	return false;
}

int main() {

	return 0;
}

