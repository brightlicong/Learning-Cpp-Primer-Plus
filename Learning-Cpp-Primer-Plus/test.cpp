#include "Chapter8.h"
#include <iostream>

void show_array(int arr[][4]) {
	std::cout << arr[0];
}
void tryNewFeature(void) {
	int data[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			data[i][j] = i + j;
		};
	};
	std::cout << data[0] << std:: endl;
	//int data[]{ 1,2,3 };
	show_array(data);
};



void TEST(void) {
	Chapter8_test();
	//tryNewFeature();
}