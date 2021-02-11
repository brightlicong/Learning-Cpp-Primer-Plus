#include "Cow.h"
#include <cstring>
#include <iostream>
namespace Chapter12 {
	Cow::Cow() {
		name[0] = '\0';
		hobby = new char[1];
		hobby[0] = '\0';
		weight = 0.0;
	}

	Cow::Cow(const char* nm, const char* ho, double wt) {
		if (std::strlen(nm) > 20) {
			std::cout << "Error! The name is too long.";
			name[0] = '\0';
		}
		else
			strcpy_s(name, std::strlen(nm)+1 , nm);
		auto hobby_len = std::strlen(ho);
		hobby = new char[hobby_len + 1];
		strcpy_s(hobby, hobby_len + 1, ho);
		weight = wt;
	}

	Cow::Cow(const Cow& c) {
		strcpy_s(name, std::strlen(c.name) + 1, c.name);
		auto hobby_len = std::strlen(c.hobby);
		hobby = new char[hobby_len + 1];
		strcpy_s(hobby, hobby_len + 1, c.hobby);
		weight = c.weight;
	}

	Cow& Cow::operator=(Cow& c) {
		if (this == &c)
			return *this;
		delete [] hobby;
		strcpy_s(name, std::strlen(c.name) + 1, c.name);
		int hobby_len = std::strlen(c.hobby);
		hobby = new char[hobby_len + 1];
		strcpy_s(hobby, hobby_len + 1, c.hobby);
		weight = c.weight;
		return *this;
	}

	Cow::~Cow() {
		delete[]hobby;
	}

	void Cow::ShowCow() const {
		std::cout << "COW NAME: " << name << std::endl;
		std::cout << "COW HOBBY: " << hobby << std::endl;
		std::cout << "WEIGHT: " << weight << std::endl;
	}
}