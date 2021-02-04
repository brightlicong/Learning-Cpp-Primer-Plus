#include "golf.h"
#include <iostream>
#include <cstring>

namespace Chapter9{
	void setgolf(golf& g, const char* name, int hc) {
		for (int i = 0; i < Len; i++) {
			g.fullname[i] = name[i];
		}
		g.handicap = hc;

	}

	int setgolf(golf& g) {
		using std::cin;
		using std::cout;
		char golf_name[Len];
		cout << "Please enter the name: ";
		char name[Len];
		cin.getline(name,Len);
		if (strlen(name) == 0) {
			cout << "OUT1\n";
			return 0;
		}
 		cout << "Please enter the handicap: ";
		int hc;
		cin >> hc;
		if (!cin) {
			cout << "OUT2\n";
			return 0;
		}
		setgolf(g,name,hc);
		cin.get(); //去除输入数字后留下的\n，以免影响下次输入。
		return 1;
		
	}

	void handicap(golf& g, int hc) {
		g.handicap = hc;
	}

	void showgolf(const golf& g) {
		using std::cout;
		using std::endl;
		cout << "NAME: " << g.fullname << endl;
		cout << "HADNICAP: " << g.handicap << endl;
	}
}