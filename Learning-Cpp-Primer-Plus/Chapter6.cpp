#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
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
    double donation[10];
    double sum = 0;
    int i = 0;
    while (cin >> donation[i] && i < 10) {
        sum += donation[i];
        i++;
    }
    double average = sum / i;
    int bigger_num = 0;
    for (int j = 0; j < i; j++) {
        if (donation[j] > average)
            bigger_num++;
    }
    cout << "The average = " << average << endl;
    cout << "In this array has " << bigger_num << " large than avearge" << endl;
    
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
        int preference; //0= fullname£¨1= title£¨2= bopname
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
    long income;
    double tax = 0.0;
    cout << "Please enter your income." << endl;
    while (cin >> income) {
        if (income < 0) {
            cout << "Done!";
            break;
        };
        if (income < 5000)
            tax = 0;
        else if (income < 15000)
            tax = 0.1 * (income - 5000.0);
        else if (income < 35000)
            tax = 0.1 * 10000 + 0.15 * (income - 15000.0);
        else
            tax = 0.1 * 1000 + 0.15 * 20000 + 0.2 * (income - 35000.0);
        cout << "Your tax is " << tax << endl;
        cout << "Please enter your income." << endl;

    }

};

void practice6_6(void) {
    struct bill {
        string name;
        double fund = 0.0;
    };
    int patrons_num = 0;
    cout << "Please enter the number of patrons: ";
    cin >> patrons_num;
    bill *bills = new bill[patrons_num];
    bool has_grand_patrons = false;
    bool has_normal_patrons = false;
    for (int i = 0; i < patrons_num; i++) {
        cout << "Please fill up the bill #" << (i + 1) << endl;
        cout << "NAME :";
        cin >> bills[i].name;
        cout << "FUNDs : ";
        cin >> bills[i].fund;
        bills[i].fund > 10000 ? has_grand_patrons = true : has_normal_patrons = true;
    }
    cout << "Grand Patrons" << endl;
    
    if (has_grand_patrons) {
        for (int i = 0; i < patrons_num; i++) {
            if (bills[i].fund > 10000)
                cout << bills[i].name << endl;
        }
    }
    else
        cout << "none\n";
    cout << "Patrons" << endl;

    if (has_normal_patrons) {
        for (int i = 0; i < patrons_num; i++) {
            if (bills[i].fund <= 10000)
                cout << bills[i].name << endl;
        }
    }
    else
        cout << "none\n";
};

void practice6_7(void) {
    cout << "Enter words (q to quit)\n";
    int V_words = 0;
    int C_words = 0;
    int other = 0;
    string input_word;
    cin >> input_word;
    while (input_word != "q") {
        if (!isalpha(input_word.at(0)))
            other++;
        else if (tolower(input_word.at(0)) == 'a' ||
            tolower(input_word.at(0)) == 'e' ||
            tolower(input_word.at(0)) == 'i' ||
            tolower(input_word.at(0)) == 'o' ||
            tolower(input_word.at(0)) == 'u')
            V_words++;
        else
            C_words++;
        cin >> input_word;

    }
    cout << V_words << " words beginning with vowels\n";
    cout << C_words << " words beginning with consonants\n";
    cout << other << " others";

};

void practice6_8(void) {
    char fileName[] = "Harry Poter.txt";
    ifstream inFile;
    inFile.open(fileName);
    if (!inFile.is_open()) {
        cout << "Could not open thr file " << fileName << endl;
        exit(EXIT_FAILURE);
    };
    string words;
    long count = 0;
    while (inFile >> words)
        count++;
    cout << "The file has " << count << " words\n";
    inFile.close();
};

void practice6_9(void) {
    char fileName[] = "pratice9.txt";
    ifstream inFile;
    inFile.open(fileName);
    if (!inFile.is_open()) {
        cout << "Could not open thr file " << fileName << endl;
        exit(EXIT_FAILURE);
    };
    /*************/
    struct bill {
        //char name[20];
        string name;
        long fund = 0.0;
    };
    int patrons_num = 0;
    inFile >> patrons_num;
    string xx; // Ω” ’\n
    getline(inFile,xx);
    bill* bills = new bill[patrons_num];
    bool has_grand_patrons = false;
    bool has_normal_patrons = false;
    for (int i = 0; i < patrons_num; i++) {
        getline(inFile, bills[i].name);
        inFile >> bills[i].fund;
        getline(inFile, xx);
        bills[i].fund > 10000 ? has_grand_patrons = true : has_normal_patrons = true;
    }
    cout << "--*Grand Patrons*--" << endl;
    if (has_grand_patrons) {
        for (int i = 0; i < patrons_num; i++) {
            if (bills[i].fund > 10000)
                cout << bills[i].name << endl;
        }
    }
    else
        cout << "none\n";
    
    cout << "----*Patrons*----" << endl;
    if (has_normal_patrons) {
        for (int i = 0; i < patrons_num; i++) {
            if (bills[i].fund <= 10000)
                cout << bills[i].name << endl;
        }
    }
    else
        cout << "none\n";
    inFile.close();
};



void Chapter6_test(void) {
	//practice6_1();
	//practice6_2();
    //practice6_3();
    //practice6_4();
    //practice6_5();
    //practice6_6();
    //practice6_7();
    //practice6_8();
    practice6_9();
}