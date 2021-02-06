#include <iostream>
#include <string>
#include <new>
#include "golf.h"
#include "Chapter9.h"

namespace Chapter9 {
	void test(void) {
		//practice1();
		//practice2();
		//practice3();
		//practice4();
	}

	/* - 1 - */
	void practice1(void){
		golf ann;
		int ifloop = 1;
		while (ifloop){
			ifloop = setgolf(ann);
			if (ifloop == 0)
				break;
			showgolf(ann);
		}
	}

	/* - 2 - */
	const int ArSize = 10;
	void strcount(std::string str);
	void practice2(void) {
		using namespace std;
		string input;
		cout << "Enter a line\n";
		getline(cin, input);
		while (input != "") {
			strcount(input);
			cout << "Enter next lien (empty line to quit): \n";
			getline(cin, input);
		}
		cout << "Bye\n";
		return;
	}

	void strcount(std::string str) {
		using namespace std;
		static int total = 0;
		int count = 0;
		count = str.length();
		total += count;
		cout << "\"" << str << "\"contains " << count << " characters\n";
		cout << total << "characters total\n";
	}

	/* - 3 - */
	const int BUF = 512;
	char buffer[BUF];
	const int N = 2;
	struct chaff {
		char dross[20];
		int slag;
	};

	void practice3(void) {
		using namespace std;
		chaff* pc1, * pc2;
		const char* name1[2] = { "AA","BB" }, * name2[2] = { "CC","DD" };
		cout << "Calling new and placement new: \n";
		pc1 = new chaff[N];
		pc2 = new(buffer)chaff[N];
		for (int i = 0; i < N; i++)
		{
			strcpy_s(pc1[i].dross,20, name1[i]);
			strcpy_s(pc2[i].dross,20, name2[i]);
			pc1[i].slag = pc2[i].slag = 1000 + 20 * i;
		}
		cout << "Memory address:\n" << "  Heap:  " << pc1 << "  Static: " << (void*)buffer << endl;
		cout << "Memory contents:\n";
		for (int i = 0; i < N; i++)
		{
			cout << pc1[i].dross << " at:   " << &pc1[i].dross << "; " << pc2[i].dross << " at:   " << &pc2[i].dross << endl;
			cout << pc1[i].slag << " at: " << &pc1[i].slag << "; " << pc2[i].slag << " at: " << &pc2[i].slag << endl;
		}
		delete[] pc1;
		system("pause");
		return;
	}

	/* - 4 - */
	void practice4(void) {
		std::cout << "ÂÔ";
	}
	
}
