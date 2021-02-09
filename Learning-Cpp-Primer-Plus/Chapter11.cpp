#include "Chapter11.h"
#include <cstdlib>b
#include <fstream>
#include <iostream>
#include <ctime>
#include <cmath>
#include "Vector.h"
namespace Chapter11 {
	/* -1- */

	void practice1() {
		using namespace std;
		srand(time(0));
		double direction;
		Vector result(0.0, 0.0);
		Vector step;
		unsigned long steps = 0;
		double target;
		double dstep;

		const char* filename = ".\\txt\\randwalk.txt";
		fstream file(filename, fstream::out);
		if (!file.is_open()) {
			cout << "Error";
			return;
		}

		cout << "Enter target distance (q to quit): ";
		while (cin >> target) {
			file << "Target Distance: " << target << ", ";
			cout << "Enter step length: ";
			if (!(cin >> dstep))
				break;
			file << "Step Size: " << dstep << endl;
			while (result.mag_val() < target) {
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
				file << steps << ": ";
				file << result << endl;
			}

			file << "After " << steps << " steps, the subject has the following location:\n";
			file << result << endl;
			result.polor_mode();
			file << "or\n";
			file << result << endl;
			file << "Average outward distance per step = " << result.mag_val() / steps << endl;
			steps = 0;
			result.reset(0.0, 0.0);
			cout << "Enter target distance (q to quit): ";
		}
		cout << "Bye!\n";
		cin.clear();
		while (cin.get() != '\n')
			continue;
		file.close();
		return;
	}

	/* -2- */
	void practice2() {
		std::cout << "ÂÔ";
	}

	void test() {
		//practice1();
		practice2();
	}

	
}