#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;


/*pratice 8-1*/
void print_str(char* str, int n=1);

void practice8_1(void) {
	int n = 5;
	char test_str[] = "This is a string.\n";
	cout << "print once:\n";
	print_str(test_str);
	cout << "print for " << n << " times: \n";
	print_str(test_str,n);
}

void print_str(char* str, int n) {
	for (int i = 0; i < n; i++)
		cout << str;
}

/*pratice 8-2*/
struct CandyBar {
	char brand_name[20];
	double weight;
	long calorie;
};

void init_candybar(CandyBar& candy, const char* name = "Millennium Munch", const double w = 2.85, const int kal = 350);
void show_candybar_info(const CandyBar& candy);

void practice8_2(void) {
	CandyBar candy;
	init_candybar(candy);
	show_candybar_info(candy);
}

void init_candybar(CandyBar& candy, const char* name, const double w, const int kal) {
	for (int i = 0;i<20;i++)
		candy.brand_name[i] = name[i];
	candy.weight = w;
	candy.calorie = kal;
}
void show_candybar_info(const CandyBar& candy) {
	cout << "WOW, here comes a candy.\n";
	cout << "it is name is " << candy.brand_name << endl;
	cout << "its weight is " << candy.weight << endl;
	cout << "It has " << candy.calorie << " calorie\n";
}

/*pratice 8-3*/
void show_upper_string(string str);

void practice8_3(void) {
	string input;
	cout << "Enter a string (q to quit)\n";
	getline(cin, input);
	while (input != "q") {
		show_upper_string(input);
		cout << "Next string (q to quit)\n";
		getline(cin, input);
	}
	cout << "Bye.\n";
}

void show_upper_string(string s) {
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout << s << endl;
}

/*pratice 8-4*/
struct stringy {
	char* str;
	int ct = 100;
};

void set(stringy & str , const char* from_str);
void show(stringy, int n =1);
void show(const char*, int n = 1);

void practice8_4(void) {
	stringy beany;
	char testing[] = "Reality isn't what it used to be";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done");
	return;
}

void set(stringy & str, const char* from_str) {
	str.ct = strlen(from_str);
	str.str = new  char[str.ct + 1];
	strcpy_s(str.str,str.ct+1,from_str);

}

void show(stringy str, int n) {
	for (int i = 0; i < n; i++)
		cout << str.str << endl;
}

void show(const char* str, int n) {
	for (int i = 0; i < n; i++)
		cout << str << endl;
}

/*pratice 8-5*/
template<typename T>
T max5 (T* arr);

void practice8_5(void) {
	int test_arr_int[]{ 1, 2, 3, 4, 5 };
	double test_arr_double[]{1.0,5.5,15.0,1.1,-5.0};
	cout << max5<int>(test_arr_int) << endl;
	cout << max5<double>(test_arr_double) << endl;
}

template<typename T>
T max5(T* arr) {
	T max = arr[0];
	for (int i = 1; i < 5; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

/*pratice 8-6*/
template<typename T>
T maxn(T* , int);
template <> char * maxn<char*>(char * arr[],int n);


void practice8_6(void) {
	int test_arr_int[]{ 1, 2, 3, 4, 5, 6 };
	double test_arr_double[]{ 1.0,5.5,15.0,1.1 };
	//const char * 无法赋给char * 所以才有以下的操作
	char arr_str[][10]{ "one","two","three","four","five" };
	char* test_arr_str[5];
	for (int i = 0; i < 5; i++) {
		test_arr_str[i] = arr_str[i];
	}
	
	cout << maxn<int>(test_arr_int,6) << endl;
	cout << maxn<double>(test_arr_double,4) << endl;
	cout << maxn(test_arr_str,5) << endl;
}

template<typename T>
T maxn(T* arr, int n) {
	T max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

template <> char * maxn(char * arr[], int n) {
	char* max = arr[0];
	int max_len = strlen(arr[0]);
	for (int i = 1; i < n; i++) {
		if ((int)strlen(arr[i]) > max_len)
		{
			max_len = strlen(arr[i]);
			max = arr[i];
		}
	}
	return max;
}

/*pratice 8-7*/

void practice8_7(void) {
	cout << "略";
}

/*TEST*/
void Chapter8_test(void) {
	//practice8_1();
	//practice8_2();
	//practice8_3();
	//practice8_4();
	//practice8_5();
	//practice8_6();
	//practice8_7();
}