#include <iostream>
#include <string>
#include <cstring>
#include <array>
using namespace std;

void practice4_1(void) {
	const int name_len = 20;
	char first_name[name_len];
	char last_name[name_len];
	char grade;
	int age;
	cout << "What is your first name? ";
	cin.getline(first_name, name_len);
	cout << "What is your last name? ";
	cin.getline(last_name, name_len);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(grade + 1)<<endl;
	cout << "Age: " << age << endl;
};

void practice4_2(void) {
	string name;
	string dessert;

	cout << "Enter your name: \n";
	getline(cin, name);
	cout << "Enter your favorite dessert: \n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
};

void practice4_3(void) {
	char first_name[20];
	char last_name[20];
	cout << "Enter your first name: ";
	cin.getline(first_name, 20);
	cout << "Enter your last name: ";
	cin.getline(last_name, 20);
	strcat_s(last_name, ", ");
	strcat_s(last_name,first_name);
	cout << "Here's the information in a single string: " << last_name<<endl;
};

void practice4_4(void) {
	string first_name;
	string last_name;
	string full_name;
	cout << "Enter your first name: ";
	getline(cin,first_name);
	cout << "Enter your last name: ";
	getline(cin, last_name);
	full_name = last_name + ", " + first_name;
	cout << "Here's the information in a single string: " << full_name << endl;
};

void practice4_5(void) {
	struct CandyBar {
		char Brand[20];
		float weight;
		int calorie;
	};

	CandyBar snack{ "Mocha Munch",2.3,350 };
	cout << "Brand: "<<snack.Brand<<endl;
	cout << "Weight: " <<snack.weight<<endl;
	cout << "Calorie: " << snack.calorie<<endl;
};

void practice4_6(void) {
	struct CandyBar {
		char Brand[20];
		float weight;
		int calorie;
	};
	CandyBar snacks[3]{ { "Mocha Munch",2.3,350 },
						{ "Mocha Munch",2.3,350 },
						{ "Mocha Munch",2.3,350 }};
	for (int i = 0; i < 3; i++) {
		cout << "Brand: " << snacks[i].Brand << endl;
		cout << "Weight: " << snacks[i].weight << endl;
		cout << "Calorie: " << snacks[i].calorie << endl;
	}
};
	

void practice4_7(void) {
	struct Pizza {
		char Brand[20];
		int radius;
		float weight;
	};
	Pizza someone;
	cout << "Please fill up the information of the pizza:\n";
	cout << "Brand: ";
	cin.getline(someone.Brand, 20);
	cout << "Radius: ";
	cin >> someone.radius;
	cout << "Weight: ";
	cin >> someone.weight;
	cout << "DONE!\n";
	cout << "Brand: " << someone.Brand << endl;
	cout << "Radius: " << someone.radius << endl;
	cout << "Weight: " << someone.weight << endl;
};

void practice4_8(void) {
	struct Pizza {
		char Brand[20];
		int radius;
		float weight;
	};
	Pizza* someone = new Pizza;
	cout << "Please fill up the information of the pizza:\n";
	cout << "Brand: ";
	cin.getline(someone->Brand, 20);
	cout << "Radius: ";
	cin >> someone->radius;
	cout << "Weight: ";
	cin >> someone->weight;
	cout << "DONE!\n";
	cout << "Brand: " << someone->Brand << endl;
	cout << "Radius: " << someone->radius << endl;
	cout << "Weight: " << someone->weight << endl;
	delete someone;
};

void practice4_9(void) {
	cout << "ÂÔ";
}

void practice4_10(void) {
	array<float, 3> arr;
	cout << "Please enter the results of 3 times 40m run\n";
	cout << "1st: ";
	cin>> arr[0];
	cout << "2nd: ";
	cin >> arr[1];
	cout << "3st: ";
	cin >> arr[2];
	float result = (arr[0] + arr[1] + arr[2]) / 3;
	cout << "The average of these result is "<<result;
}









void Chapter4_test(void) {
	//practice4_1();
	//practice4_2();
	//practice4_3();
	//practice4_4();
	//practice4_5();
	//practice4_6();
	//practice4_7();
	practice4_8();
	practice4_9();
	//practice4_10();

};