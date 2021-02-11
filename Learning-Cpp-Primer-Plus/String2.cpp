#include "String2.h"
#include <cstring>
#include <iostream>
namespace Chapter12{

	using std::cin;
	using std::cout;

	// initializing static class member

	int String::num_strings = 0;       //初始化应该在方法文件中，不在类声明中，不需使用static

	// static method
	int String::HowMany()          //静态成员函数
	{
		return num_strings;
	}

	// class methods
	String::String(const char* s)     // construct String from C string
	{
		len = std::strlen(s);          // set size
		str = new char[len + 1];       // allot storage
		strcpy_s(str, len + 1, s);           // initialize pointer
		num_strings++;                 // set object count
	}

	String::String()                   // default constructor
	{
		len = 4;
		str = new char[1];
		str[0] = '\0';                 // default string
		num_strings++;
	}

	String::String(const String& st)
	{
		num_strings++;             // handle static member update
		len = st.len;              // same length
		str = new char[len + 1];  // allot space
		strcpy_s(str, len + 1, st.str);  // copy string to new location
	}

	String::~String()                     // necessary destructor
	{
		--num_strings;                    // required
		delete[] str;                    // required
	}

	// overloaded operator methods    

	// assign a String to a String
	String& String::operator=(const String& st)
	{
		if (this == &st)
			return *this;
		delete[] str;
		len = st.len;
		str = new char[len + 1];
		strcpy_s(str, len + 1, st.str);
		return *this;
	}

	// assign a C string to a String
	String& String::operator=(const char* s)
	{
		delete[] str;
		len = std::strlen(s);
		str = new char[len + 1];
		strcpy_s(str, len + 1, s);
		return *this;
	}

	// read-write char access for non-const String
	char& String::operator[](int i)
	{
		return str[i];
	}

	// read-only char access for const String
	const char& String::operator[](int i) const
	{
		return str[i];
	}

	// overloaded operator friends

	bool operator<(const String& st1, const String& st2)
	{
		return (std::strcmp(st1.str, st2.str) < 0);
	}

	bool operator>(const String& st1, const String& st2)
	{
		return st2 < st1;
	}

	bool operator==(const String& st1, const String& st2)
	{
		return (std::strcmp(st1.str, st2.str) == 0);
	}

	// simple String output
	ostream& operator<<(ostream& os, const String& st)
	{
		os << st.str;
		return os;
	}

	// quick and dirty String input
	istream& operator >> (istream& is, String& st)
	{
		char temp[String::CINLIM];
		is.get(temp, String::CINLIM);
		if (is)
			st = temp;
		while (is && is.get() != '\n')
			continue;             //删除多余的字符
		return is;
	}


	//新载函数的方法实现
	void String::stringlow()
	{
		for (int i = 0; i < len; i++)
		{
			if (isupper(str[i]))
				str[i] = tolower(str[i]);
		}
	}

	void String::stringup()
	{
		for (int i = 0; i < len; i++)
		{
			if (islower(str[i]))
				str[i] = toupper(str[i]);
		}
	}

	int String::has(char c)
	{
		int count = 0;
		for (int i = 0; i < len; i++)
		{
			if (str[i] == c)
				count++;
		}
		return count;
	}

	String operator+(const String& st1, const String& st2)
	{
		String s;
		s.len = st1.len + st2.len;
		s.str = new char[s.len + 1];
		for (int i = 0; i < st1.len; i++)
		{
			s.str[i] = st1.str[i];
		}

		for (int i = st1.len; i < s.len; i++)
		{
			s.str[i] = st2.str[i - st1.len];
		}
		s.str[s.len] = NULL;
		return s;
	}

}