#include "Chapter10.h"
#include "BankAccount.h"
#include "Person.h"
#include "golf.h"
#include "Move.h"

namespace Chapter10{
	void practice1(void) {
		BankAccount client = BankAccount("Li Cong","01234567890123456789" );
		client.withdraw(100.0);
		client.deposit(200.0);
		client.withdraw(100.0);
	}

	void practice2(void) {
		using std::cout;
		Person one;
		Person two("Smythecraft");
		Person three("Dimwiddy", "Sam");
		cout << "ONE\n";
		one.Show();
		one.FormalShow();
		cout << "TWO\n";
		two.Show();
		two.FormalShow();
		cout << "THREE\n";
		three.Show();
		three.FormalShow();
	}

	void practice3(void) {
		golf g;
		golf g2("Jimmy", 100);

		g.showgolf();
		g.sethandicap(120);
		g.showgolf();

		g2.showgolf();
		g2.sethandicap(120);
		g2.showgolf();
	}

	void practice4(void) {
		std::cout << "ÂÔ";
	}

	void practice5(void) {
		std::cout << "ÂÔ";
	}

	void practice6(void) {
		using std::cout;
		Move point{ 2,2 };
		Move point2{ 3,4 };
		cout << "Move point{ 2,2 };\n";
		point.showMove();

		cout << "Move point2{ 3,4 };\n";
		point2.showMove();
		
		point.reset(4,3);
		cout << "point.reset(4.3);\n";
		point.showMove();

		Move temp = point.add(point2);
		cout << "Move temp = point.add(point2);\n";
		temp.showMove();
	}

	void practice7(void) {
		std::cout << "ÂÔ";
	}

	void test(void) {
		//practice1();
		//practice2();
		//practice3();
		//practice6();
	}

}