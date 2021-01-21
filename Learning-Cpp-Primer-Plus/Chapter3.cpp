# include <iostream>
# include "Chapter3.h"

void practice3_1(void) {
	using namespace std;
	//Ó¢´çÎªinch,Ó¢³ßÎªfoot;
	const int in2ft = 12;
	int height;
	cout << "PLease input your height in inch:__\b\b";
	cin >> height;
	cout << endl;
	int H_ft = height / in2ft;
	int H_in = height % in2ft;
	cout << "Your height is " << H_ft << "Foots " << H_in << "Inchs" << endl;
}

void practice3_2(void) {
	using namespace std;
	int H_ft;
	int H_in;
	double H_m;
	int W_lb;
	float W_kg;
	const double inch2meter = 0.0254;
	const double pound2kilogram = 0.4535924;
	cout << "PLease input your height." << endl;
	cout<<"Foot:__\b\b";
	cin >> H_ft;
	cout << endl;
	cout << "Inch:__\b\b";
	cin >> H_in;
	cout << endl;
	H_m = inch2meter * (12 * H_ft + H_in);
	cout << "PLease input your weight." << endl;
	cout << "Pound:__\b\b";
	cin >> W_lb;
	W_kg = pound2kilogram * W_lb;
	double IBM = W_kg / (H_m * H_m);
	cout << "IBM = " << IBM << endl;
}

void practice3_3(void) {
	using namespace std;
	const int trans = 60;
	double degree;
	double minutes;
	double seconds;
	cout << "Enter a latitude in degree, minutes, and seconds;" << endl;
	cout << "First, enter the degrees:";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	double result;
	result = degree + minutes / trans + seconds / trans / trans;
	cout << int(degree) << " degrees, " << int(minutes) << " minutes, " << int(seconds) << " seconds = " << result << " degrees" << endl;
}

void practice3_4(void) {
	using namespace std;
	long long seconds;
	cout << "Ebter the number of seconds: ";
	cin >> seconds;
	int days;
	int hours;
	int minutes;
	int second_new;
	int result;
	second_new = seconds % 60;
	result = seconds / 60;
	minutes = result % 60;
	result = result / 60;
	hours = result % 24;
	days = result / 24;
	cout << seconds << " seconds = " << days << " days, " << hours << "hours, " << minutes << " minutes, " << second_new << "seconds" << endl;
}

void practice3_5(void) {
	std::cout << "ÂÔ" << std::endl;
}

void practice3_6(void){
	std::cout << "ÂÔ" << std::endl;
}

void practice3_7(void) {
	std::cout << "ÂÔ" << std::endl;
}



void Chapter3_test(void) {
	//practice3_1();
	//practice3_2();
	//practice3_3();
	//practice3_4();
	practice3_5();
	practice3_6();
	practice3_7();
}