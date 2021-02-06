#include "Person.h"
#include <iostream>

Person::Person(const std::string& ln, const char* fn) {
	lname = ln;
	int i = 0;
	while (fn[i] != '\0') {
		fname[i] = fn[i];
		i++;
	}
	fname[i] = '\0';
}

void Person::Show() const {
	using std::cout;
	using std::endl;
	cout <<"First name: " << fname << endl;
	cout << "Last name: " << lname << endl;
}

void Person::FormalShow() const {
	using std::cout;
	using std::endl;
	cout << "Full name: " << fname << " "<< lname << endl;
}