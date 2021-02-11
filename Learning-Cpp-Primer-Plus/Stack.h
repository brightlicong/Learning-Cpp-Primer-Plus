#ifndef  STACK_H_
#define STACK_H_


namespace Chapter12 {
	typedef unsigned long Stack_item;
	class Stack
	{
	private:
		enum { MAX = 10 };    // constant specific to class
		Stack_item* pitems;       // holds stack items
		int size;            //number of elements in stack
		int top;            // index for top stack item
	public:
		Stack(int n = MAX);      //creates stack with n elements
		Stack(const Stack& st);
		~Stack();
		bool isempty() const;
		bool isfull() const;
		// push() returns false if stack already is full, true otherwise
		bool push(const Stack_item& item);   // add item to stack
		// pop() returns false if stack already is empty, true otherwise
		bool pop(Stack_item& item);          // pop top into item
		Stack& operator=(const Stack& st);
	};
}

#endif // ! STACK_H_