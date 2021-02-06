#include "Move.h"
#include <iostream>
Move::Move(double a, double b) {
	x = a;
	y = b;
}
void Move::reset(double a, double b) {
	x = a;
	y = b;
}

void Move::showMove() const {
	using std::cout;
	cout << "X: " << x;
	cout << "  ";
	cout << "Y: " << y << std::endl;
}

double Move::getX() const {
	return x;
}

double Move::getY() const {
	return y;
}

Move Move::add(const Move& m) const {
	Move temp(x + m.getX(), y + m.getY());
	return temp;
}