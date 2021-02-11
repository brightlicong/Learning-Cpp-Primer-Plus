#include <iostream>
#include <ctime>
#include <cstdlib>
#include "queue.h"
#include "Chapter12.h"
#include "Cow.h"
#include "Stock.h"
#include "Stack.h"
#include "String2.h"


namespace Chapter12 {
	void test() {
		practice5();
	}

	void practice1() {
		Cow cow;
		Cow cow2("COW2", "DANCE", 2020.2021);
		Cow cow3 = cow2;
		cow.ShowCow();
		cow2.ShowCow();
		cow3.ShowCow();
	}

	void practice2() {
		/*从网络寻求帮助：https://blog.csdn.net/weixin_41282726/article/details/85291756 */
		using namespace std;
		String s1(" and I am a C++ student.");
		String s2 = "Please enter your name: ";
		String s3;
		cout << s2;
		cin >> s3;
		s2 = "My name is " + s3;
		cout << s2 << endl;
		s2 = s2 + s1;
		s2.stringup();
		cout << "The string\n" << s2 << "\ncontains " << s2.has('A')
			<< "'A' characters in it. \n";
		s1 = "red";
		String rgb[3] = { String(s1),String("green"),String("blue") };
		cout << "Enter the name of a primary color for mixing light: ";
		String ans;
		bool success = false;
		while (cin >> ans) {
			ans.stringlow();
			for (int i = 0; i < 3; i++) {
				if (ans == rgb[i]) {
					cout << "That's right!\n";
					success = true;
					break;
				}
			}
			if (success)
				break;
			else
				cout << "Try again!\n";
			
		}
		cout << "Bye\n";
	}
	
	void practice3() {
		const int STKS = 4;
		Stock stocks[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
		};

		std::cout << "Stock holdings:\n";
		int st;
		for (st = 0; st < STKS; st++)
			std::cout << stocks[st];
		// set pointer to first element
		const Stock* top = &stocks[0];
		for (st = 1; st < STKS; st++)
			top = &top->topval(stocks[st]);
		// now top points to the most valuable holding
		std::cout << "\nMost valuable holding:\n";
		std::cout << *top;
		// std::cin.get();
		return;
	}

	void practice4() {
		using namespace std;
		Stack st;
		cout << "Is st empty:";
		cout << st.isempty() << endl;
		cout << "Is st full:";
		cout << st.isfull() << endl;
		
		Stack_item it[10];
		cout << "Push to st:";
		for (int i = 0; i < 10; i++)
		{
			it[i] = i + 1;
			st.push(it[i]);
			cout << it[i] << " ";
		}
		cout << "\nIs st full:";
		cout << st.isfull() << endl;

		Stack po;
		cout << "\nAt first\nIs po empty:";
		cout << po.isempty() << endl;
		po = st;
		cout << "\nAfter po=st\nIs po empty:";
		cout << po.isempty();
		cout << "\nIs po full:";
		cout << po.isfull() << endl;

		cout << "\nPop to st:";
		for (int i = 0; i < 10; i++)
		{
			st.pop(it[i]);
			cout << it[i] << " ";
		}
		cout << "\nIs st empty:";
		cout << st.isempty() << endl;
		return;
	}
	
	bool newcustomer(double x)
	{
		return (std::rand() * x / RAND_MAX < 1);
	}
	const int MIN_PER_HR = 60;

	void practice5() {
		using std::cin;
		using std::cout;
		using std::endl;
		using std::ios_base;
		// setting things up
		std::srand(std::time(0));    //  random initializing of rand()

		cout << "Case Study: Bank of Heather Automatic Teller\n";
		cout << "Enter maximum size of queue: ";
		int qs;
		cin >> qs;
		Queue line(qs);         // line queue holds up to qs people

		cout << "Enter the number of simulation hours: ";
		int hours;              //  hours of simulation
		cin >> hours;
		// simulation will run 1 cycle per minute
		long cyclelimit = MIN_PER_HR * hours; // # of cycles

		//cout << "Enter the average number of customers per hour: ";
		//double perhour;         //  average # of arrival per hour
		//cin >> perhour;
		double perhour = 1;
		double min_per_cust;    //  average time between arrivals
		min_per_cust = MIN_PER_HR / perhour;

		Item temp;              //  new customer data
		long turnaways = 0;     //  turned away by full queue
		long customers = 0;     //  joined the queue
		long served = 0;        //  served during the simulation
		long sum_line = 0;      //  cumulative line length
		int wait_time = 0;      //  time until autoteller is free
		long line_wait = 0;     //  cumulative time in line


		cout << "running the simulation";
		cout << "# " << perhour;
		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			
			if (newcustomer(min_per_cust))  // have newcomer
			{
				if (line.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival
					line.enqueue(temp); // add newcomer to line
				}
			}
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue(temp);      // attend next customer
				wait_time = temp.ptime(); // for wait_time minutes
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;
			sum_line += line.queuecount();
		}
		double ave_wait_t = (double)line_wait / served;
		cout << ave_wait_t << "min" << endl;
		while (ave_wait_t <= 1) {
			perhour++;
			line_wait = served = 0;
			min_per_cust = MIN_PER_HR / perhour;
			cout << "# " << perhour <<" ";
			for (int cycle = 0; cycle < cyclelimit; cycle++)
			{
				if (newcustomer(min_per_cust))  // have newcomer
				{
					if (line.isfull())
						turnaways++;
					else
					{
						customers++;
						temp.set(cycle);    // cycle = time of arrival
						line.enqueue(temp); // add newcomer to line
					}
				}
				if (wait_time <= 0 && !line.isempty())
				{
					line.dequeue(temp);      // attend next customer
					wait_time = temp.ptime(); // for wait_time minutes
					line_wait += cycle - temp.when();
					served++;
				}
				if (wait_time > 0)
					wait_time--;
				sum_line += line.queuecount();
				
			}
			ave_wait_t = (double)line_wait / served;
			cout << ave_wait_t << "min" << endl;
		}
		// reporting results
		cout << "Done!\n";
		// cin.get();
		// cin.get();
		return;
	}

	void practice6() {
		using std::cin;
		using std::cout;
		using std::endl;
		using std::ios_base;
		// setting things up     
		std::srand(std::time(0));    //  random initializing of rand()

		cout << "Case Study: Bank of Heather Automatic Teller\n";
		cout << "Enter maximum size of queue: ";
		int qs;
		cin >> qs;
		Queue line1(qs);         // line queue holds up to qs people
		Queue line2(qs);         //分成两个队伍进行计算

		cout << "Enter the number of simulation hours: ";
		int hours;              //  hours of simulation
		cin >> hours;
		// simulation will run 1 cycle per minute
		long cyclelimit = MIN_PER_HR * hours; // # of cycles

		cout << "Enter the average number of customers per hour: ";
		double perhour;         //  average # of arrival per hour
		cin >> perhour;
		double min_per_cust;    //  average time between arrivals
		min_per_cust = MIN_PER_HR / perhour;

		Item temp;              //  new customer data
		long turnaways = 0;     //  turned away by full queue
		long customers = 0;     //  joined the queue
		long served = 0;        //  served during the simulation
		long sum_line = 0;      //  cumulative line length
		int wait1_time = 0;      //  time until autoteller is free
		int wait2_time = 0;
		long line1_wait = 0;     //  cumulative time in line
		long line2_wait = 0;


		// running the simulation
		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))  // have newcomer
			{
				if (line1.isfull() && line2.isfull())
					turnaways++;
				else if (line2 > line1 || line1.isfull())
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival
					line1.enqueue(temp); // add newcomer to line1
				}
				else
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival
					line2.enqueue(temp); // add newcomer to line2
				}
			}
			if (wait1_time <= 0 && !line1.isempty())
			{
				line1.dequeue(temp);      // attend next customer
				wait1_time = temp.ptime(); // for wait_time minutes
				line1_wait += cycle - temp.when();
				served++;
			}
			if (wait2_time <= 0 && !line2.isempty())
			{
				line2.dequeue(temp);      // attend next customer
				wait2_time = temp.ptime(); // for wait_time minutes
				line2_wait += cycle - temp.when();
				served++;
			}

			if (wait1_time > 0)
				wait1_time--;
			sum_line += line1.queuecount();
			if (wait2_time > 0)
				wait2_time--;
			sum_line += line2.queuecount();
		}

		// reporting results
		if (customers > 0)
		{
			cout << "customers accepted: " << customers << endl;
			cout << "  customers served: " << served << endl;
			cout << "         turnaways: " << turnaways << endl;
			cout << "average queue size: ";
			cout.precision(2);
			cout.setf(ios_base::fixed, ios_base::floatfield);
			cout << (double)sum_line / cyclelimit << endl;
			cout << " average wait time: "
				<< (double)(line1_wait + line2_wait) / served << " minutes\n";
		}
		else
			cout << "No customers!\n";
		cout << "Done!\n";
		// cin.get();
		// cin.get();
		return;
	}
}
