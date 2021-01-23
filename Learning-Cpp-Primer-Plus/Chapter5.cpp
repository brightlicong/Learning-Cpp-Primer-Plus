#include <iostream>
#include <array>
#include <string>

using namespace std;
void practice5_1(void) {
	cout << "Please enter two integers\n";
	cout << "1st: ";
	int num1;
	cin >> num1;
	cout << "2nd: ";
	int num2;
	cin >> num2;
	int sum = 0;
	for (int i = num1; i <= num2; i++)
		sum += i;
	cout << "The result is " << sum << endl;
};

void practice5_2(void) {
	const int n_elem = 101;
	array<long double, n_elem> factorials = {1L,1L};
	for (int i = 2; i < n_elem; i++)
		factorials[i] = i * factorials[i - 1];
	cout << "100! = " << factorials[100] << endl;
};

void practice5_3(void) {
	int sum = 0;
	int input = 0;
	cout << "Begin!" << endl;
	cin >> input;
	while (input != 0) {
		sum += input;
		cout << "SUM = " << sum << endl;
		cin >> input;
	}
	cout << "Done!";
};

void practice5_4(void) {
	int year = 0;
	double Daphne_profit = 0;
	double Daphne_deposit = 100;
	double Cleo_profit = 0;
	double Cleo_deposit = 100;
	while (Cleo_profit <= Daphne_profit) {
		year++;
		Daphne_profit += Daphne_deposit * 0.1;
		Cleo_deposit += Cleo_deposit * 0.05;
		Cleo_profit = Cleo_deposit - 100;
	}
	cout << "Year = " << year<<endl;
	cout << "Daphne: " << Daphne_profit << endl;
	cout << "Cleo: " << Cleo_profit << endl;
};

void practice5_5(void){
	const int month = 12;
	const char* MONTH[month] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	int sale[12];
	int sum = 0;
	for (int i = 0; i < 12; i++) {
		cout << MONTH[i] << ": ";
		cin >> sale[i];
		sum += sale[i];
	};
	cout << "SUM = " << sum << endl;
};

void practice5_6(void) {
	const int month = 12;
	const char* MONTH[month] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	int sale[12];
	int sum_of_all = 0;
	int sumOfYear[3]{0,0,0};
	for (int i = 0; i < 3; i++) {
		cout << "Year" << (i + 1) << ":\n";
		for (int j = 0; j < 12; j++) {
			cout << MONTH[j] << ": ";
			cin >> sale[j];
			sumOfYear[i] += sale[j];
		};
	};
	sum_of_all = sumOfYear[0] + sumOfYear[1] + sumOfYear[2];
	cout << "Year1 = " << sumOfYear[0] << endl;
	cout << "Year2 = " << sumOfYear[1] << endl;
	cout << "Year3 = " << sumOfYear[2] << endl;
	cout << "SUM = " << sum_of_all << endl;
};

void practice5_7(void) {
	struct Car {
		string NAME;
		int YEAR;
	};
	int car_num;
	cout << "How many cars do you wish to catalog?  ";
	cin >> car_num;
	Car * car_list = new Car[car_num];
	string xx; //解决getline因为接收到回车而不能录入NAME的问题
	for (int i = 0; i < car_num; i++) {
		cout << "Car _#" << i+1 << endl;
		cout << "Please enter the make: ";
		
		getline(cin,xx);
		getline(cin,car_list[i].NAME);
		cout << "Please enter the year made: ";
		cin >> car_list[i].YEAR;
	};
	cout << "Here is your collection:\n";
	for (int i = 0; i < car_num; i++)
		cout << car_list[i].YEAR << " " << car_list[i].NAME << endl;
	delete[]car_list;
};

void practice5_8(void) {
	char ch;
	int counter = 0;

	cout << "Enter words(to stop, type the word done): \n";
	
	
	while (ch = cin.get()) {//获取当前字符
		if (ch == ' ' || ch == '\n') {
			counter++;
			continue;
		}
		if (ch == 'd') {
			ch = cin.get();
			if (ch == 'o') {
				ch = cin.get();
				if (ch == 'n') {
					ch = cin.get();
					if (ch == 'e') {
						break;
					};
				};
			};
		};
	};

	cout << "You entered a total of " << counter << " words.\n";
};

void practice5_9(void) {
	string input;
	int counter = 0;
	cin >> input;
	while (input != "done") {
		counter++;
		cin >> input;
	}
	cout << "You entered a total of " << counter << " words.\n";
};

void practice5_10(void) {
	int rows;
	cout << "Enter number of rows : ";
	cin >> rows;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < i; j++) {
			cout << '-';
		};
		for (int j = i; j < rows; j++) {
			cout << '*';
		};
		cout << endl;
	}
}

void Chapter5_test(void) {
	//practice5_1();
	//practice5_2();
	//practice5_3();
	//practice5_4();
	//practice5_5();
	//practice5_6();
	//practice5_7();
	//practice5_8();
	//practice5_9();
	practice5_10();
}