#include <iostream>
#include <cctype>
#include <string>
#include <stdlib.h>

using namespace std;
void practice6_1(void) {
	char ch;
	while (cin.get(ch) && ch != '@') {
		/*if (ch == '\n')
			continue;*/
		if (!isdigit(ch)) {
			if (islower(ch))
				cout << char(toupper(ch));
			else
				cout << char(tolower(ch));
		}
	}
}

void practice6_2(void) {
    cout << "Î´¶Á¶®Ìâ¸É¡£\n";
    /*
    double donation[10];
    int len, i, j;
    double sum, average, num;
    sum = 0;
    num = 0;
    string line;
    cout << "Enter 10 donation!" << endl;
    for (i = 0; i < 10; i++)
    {
        getline(cin, line, '\n');
        len = line.size();
        for (j = 0; j < len; j++)
        {
            if (isdigit(line[j]) == false && ispunct(line[j] == false))
            {
                cout << "not digit!" << endl;
            }
        }
        donation[i] = atof(line.c_str());
        sum += donation[i];
    }
    average = sum / i;
    for (i = 0; i < 10; i++)
    {
        if (donation[i] > average)
        {
            num++;
        }
    }
    cout << "The average = " << average << endl;
    cout << "In this array has " << num << " large than avearge" << endl;
    */
};

void practice6_3(void) {
    cout << "Please enter one of the following choices: \n";
    cout << "c)carnivore    p)pianist\n";
    cout << "t)tree         g)game\n";
    char ch;
    bool isLoop = false;
    do{
        cout << "Please enter a c, p, t or g:";
        cin >> ch;
        switch (ch) {
        case 'c':
            cout << "WOW! You have chosen a (a)\n";
            isLoop = false;
            break;
        case 'p':
            cout << "WOW! You have chosen a (p)\n";
            isLoop = false;
            break;
        case 't':
            cout << "WOW! You have chosen a (t)\n";
            isLoop = false;
            break;
        case 'g':
            cout << "WOW! You have chosen a (g)\n";
            isLoop = false;
            break;
        default:
            isLoop = true;
        };
    }while (isLoop);
};

void practice6_4(void) {
    const int strsize = 20;
    struct bop {
        char fullname[strsize];// real name
        char title[strsize];// job title
        char bopname[strsize];// secret BOP name
        int preference; //0= fullname£¬1= title£¬2= bopname
    };
    bop members[]{ {"fullname1","title1","bopname1",1},{"fullname2","title2","bopname2",2},{"fullname3","title3","bopname3",0},{"fullname4","title4","bopname4",1},{"fullname5","title5","bopname5",2 }};
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a.display by name    b.display by title\n";
    cout << "c.display by bopname d.display by preference\n";
    cout << "q.quit\n";
    char ch;
    cout << "Enter your choice: ";
    cin >> ch;
    while (ch != 'q') { 
        switch (ch) {
        case 'a':for (int i = 0; i < 5; i++) {
            cout << members[i].fullname<<endl;
        };
                break;
        case 'b':for (int i = 0; i < 5; i++) {
            cout << members[i].title << endl;
        };
                break;
        case 'c':for (int i = 0; i < 5; i++) {
            cout << members[i].bopname << endl;
        };
                break;
        case 'd':for (int i = 0; i < 5; i++) {
            switch (members[i].preference) {
            case 0: cout << members[i].fullname << endl;
                break;
            case 1: cout << members[i].title << endl;
                break;
            case 2: cout << members[i].bopname << endl;
                break;
            };

        };
                break;
        }
        cout << "Next choice: ";
        cin >> ch;
    };
    cout << "Bye!";
};

void practice6_5(void) {

};

void practice6_6(void) {

};

void practice6_7(void) {

};

void practice6_8(void) {

};

void practice6_9(void) {

};

void practice6_10(void) {

};

void Chapter6_test(void) {
	//practice6_1();
	//practice6_2();
    //practice6_3();
    //practice6_4();
}