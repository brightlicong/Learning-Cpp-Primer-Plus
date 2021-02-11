#include "Stack.h"

Stack::Stack() {
	top = 0;
}

bool Stack::isempty() const {
	return top == 0;
}

bool Stack::isfull() const {
	return top == MAX;
}

bool Stack::push(const Item& item) {
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item& item) {
	if (top > 0) {
		item = items[--top];
		return true;
	}
	else
		return false;
}

namespace Chapter12 {
	Stack::Stack(int n) {
		size = n;
		top = 0;
		pitems = new Item[n];
	}

	Stack::Stack(const Stack& st) {
		size = st.size;
		for (top = 0; top < size; ++top)
			pitems[top] = st.pitems[top];
	}

	Stack::~Stack() {
		delete[]pitems;
		pitems = nullptr;
		size = top = 0;
	}

	bool Stack::isempty() const {
		return top == 0;
	}

	bool Stack::isfull() const {
		return top == MAX;
	}

	bool Stack::push(const Item& item) {
		if (top < MAX) {
			pitems[top++] = item;
			return true;
		}
		else
			return false;
	}

	bool Stack::pop(Item& item) {
		if (top > 0) {
			item = pitems[--top];
			return true;
		}
		else
			return false;
	}

	Stack& Stack::operator=(const Stack& st)
	{
		if (this == &st)
			return *this;
		delete[] pitems;
		size = st.size;
		pitems = new Item[size + 1];
		for (top = 0; top < size; top++)
			pitems[top] = st.pitems[top];
		return *this;
	}
}