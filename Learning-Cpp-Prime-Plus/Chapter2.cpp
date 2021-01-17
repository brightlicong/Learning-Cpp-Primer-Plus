# include <iostream>
# include "Chapter2.h"
//Chapter2 ÁªÏµ

void practice2_1(void) {
	std::cout << "MY NAME: "<<"NULL" << std::endl;
	std::cout << "MY ADDRESS: " << "NULL" << std::endl;
}

void practice2_2(void) {
	using namespace std;
	int YARD;
	int LONG;
	cout << "Please input the LONG." << endl;
	cin >> LONG;
	YARD = LONG * 220;
	cout << "The YARD is: " << YARD << endl;
}

void practic2_3_sub1(void) {
	std::cout << "Three blind mice."<<std::endl;
}

void practic2_3_sub2(void) {
	std::cout << "See how they run." << std::endl;
}

void practice2_3(void){
	practic2_3_sub1();
	practic2_3_sub1();
	practic2_3_sub2();
	practic2_3_sub2(); 
}

void practice2_4(void) {
	using namespace std;
	int AGE;
	cout << "Enter your age: ";
	cin >> AGE;
	cout << AGE << endl;
}

float Celsius2Fahrenheit(float C_degree) {
	float F_degree;
	F_degree = C_degree * 1.8 + 32.0;
	return F_degree;
}

void practice2_5(void) {
	using namespace std;
	float C_degree;
	cout << "Please enter a Celsius value: ";
	cin >> C_degree;
	cout << C_degree << "degrees Celsius is " << Celsius2Fahrenheit(C_degree) << "degrees Fahrenheit." << endl;
}
void practice2_6(void) {
	std::cout << "Nothing" << std::endl;
}

void practice2_7(void) {
	std::cout << "Nothing" << std::endl;
}

void Chapter2_test(void) {
	practice2_1();
	practice2_2();
	practice2_3();
	practice2_4();
	practice2_5();
	practice2_6();
	practice2_7();
}

