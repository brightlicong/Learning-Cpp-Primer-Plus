#include <iostream>

using namespace std;

/*pratice 7-1*/
double harmonic_mean(int x, int y) {
	return 2.0 * x * y / (x + y);
}

void practice7_1(void) {
	cout << "Please enter 2 numbers at a time.<enter 0 to quit> \n";
	int a, b;
	double answer;
	cout << "X = ";
	cin >> a;
	cout << "Y = ";
	cin >> b;
	while (a != 0 and b != 0) {
		answer = harmonic_mean(a, b);
		cout << "ANS = " << answer << endl;
		cout << "Again.\n";
		cout << "X = ";
		cin >> a;
		cout << "Y = ";
		cin >> b;
	}
	cout << "DONE" << endl;
}

/*pratice 7-2*/

void get_golf_scores(int * scores_list, int size) {
	int i = 1;
	int score;
	cout << "Please enter the golf scores.\n";
	cout << "#" << i<<": ";
	while (cin >> score && i < size) {
		scores_list[i - 1] = score;
		i++;
		cout << "#" << i << ": ";
	}
	return;
}

void show_golf_scores(int* scores_list, int size) {
	cout << "Here is the result:\n";
	for (int i = 0; i < size; i++) {
		cout << scores_list[i] << "  ";
	}
	cout << endl;
}

float cal_scores(int* scores_list, int size) {
	int result = 0;
	for (int i = 0; i < size; i++) {
		result += scores_list[i];
	}
	return result / size;
}


void practice7_2() {
	const int golf_scores_arraySize = 10;
	int scores[golf_scores_arraySize]{};
	get_golf_scores(scores, golf_scores_arraySize);
	show_golf_scores(scores, golf_scores_arraySize);
	float mean = cal_scores(scores, golf_scores_arraySize);
	cout << "The mean score is " << mean << endl;
}


/*pratice 7-3*/
struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void cal_box_vol(box * pb){
	pb->volume = pb->height * pb->width * pb->length;
}
void show_box_info(const box b) {
	cout << b.maker << endl;
	cout << "意思意思就行了\n";
}

void practice7_3() {
	box squre = { "MINECRAFT",4,4,4 };
	cal_box_vol(&squre);
	show_box_info(squre);
}

/*pratice 7-4*/
void practice7_4() {
	cout << "略\n";
}


/*pratice 7-5*/
int cal_factorial(int n) {
	if (n < 0) {
		cout << "Error\n";
		return 0;
	}

	if (n == 0 || n == 1)
		return 1;
	else
		return n * cal_factorial(n - 1);
}
void practice7_5() {
	int N=0;
	cout << "Please enter a N :";
	while (cin >> N) {
		cout << N << "! = " << cal_factorial(N) << endl;
		cout << "Please enter a N :";
	}
}

/*pratice 7-6*/
int Fill_array(double arr[], int size) {
	cout << "Please fill up the array\n";
	int i = 0;
	double double_num;
	cout << "#"<<i+1<<": ";
	while (cin >> double_num && i<size) {
		arr[i] = double_num;
		i++;
		cout << "#" << i << ": ";
	}
	return i;
}

void Show_array(const double arr[], int size) {
	cout << "Here is the array: \n";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}
void Reverse_array(double arr[], int size) {
	int half = size / 2;
	for (int i = 0; i < half; i++) {
		double temp = arr[i];
		arr[i] = arr[size - i-1];
		arr[size - i-1] = temp;
	}
}

void practice7_6() {
	const int max_size = 20;
	double array[max_size];
	int size = Fill_array(array, max_size);
	Show_array(array, size);
	Reverse_array(array, size);
	Show_array(array, size);
}

/*pratice 7-7*/
void practice7_7(void) {
	cout << "略\n";
}

/*pratice 7-8*/
void practice7_8(void) {
	cout << "略\n";
}

/*pratice 7-9*/
void practice7_9(void) {
	cout << "略\n";
}

/*pratice 7-10*/
void practice7_10(void) {
	cout << "略\n";
}

void Chapter7_test(void) {
	//practice7_1();
	//practice7_2();
	//practice7_3();
	//practice7_5();
	//practice7_6();
}