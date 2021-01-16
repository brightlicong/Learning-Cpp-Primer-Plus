# include <iostream>
# include "Chapter2.h"
//Chapter2 ÁªÏµ

void practice_1(void) {
	std::cout << "MY NAME: "<<"NULL" << std::endl;
	std::cout << "MY ADDRESS: " << "NULL" << std::endl;
}

void practice_2(void) {
	using namespace std;
	int YARD;
	int LONG;
	cout << "Please input the LONG." << endl;
	cin >> LONG;
	YARD = LONG * 220;
	cout << "The YARD is: " << YARD << endl;
}

void practic_3_sub1(void) {
	std::cout << "Three blind mice."<<std::endl;
}

void practic_3_sub2(void) {
	std::cout << "See how they run." << std::endl;
}

void practice_3(void){
	practic_3_sub1();
	practic_3_sub1();
	practic_3_sub2();
	practic_3_sub2(); 
}

void practice_4(void) {
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

void practice_5(void) {
	using namespace std;
	float C_degree;
	cout << "Please enter a Celsius value: ";
	cin >> C_degree;
	cout << C_degree << "degrees Celsius is " << Celsius2Fahrenheit(C_degree) << "degrees Fahrenheit." << endl;
}
void practice_6(void) {
	std::cout << "Nothing" << std::endl;
}

void practice_7(void) {
	std::cout << "Nothing" << std::endl;
}

void Chapter2_test(void) {
	practice_1();
	practice_2();
	practice_3();
	practice_4();
	practice_5();
	practice_6();
	practice_7();
}

