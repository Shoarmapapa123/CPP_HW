#include "MyClass.h"
#include <iostream>
MyClass::MyClass() {
	x = 0;
	p = new int;
}
MyClass::MyClass(int x, int* p) {
	setX(x);
	this->p=p;
}
MyClass::~MyClass() {
	delete p;
}

MyClass MyClass::operator=(const MyClass& mC) {
	p = NULL;
	x = mC.x;
	return *this;
}

void MyClass::print() {
	std::cout << "X: " << x << std::endl;
	if(p!=NULL)
		std::cout<< "P: " << *p << std::endl;
}

void MyClass::setX(int x) {
	this->x = x;
}

void MyClass::setPValue(int x) {
	if (p == NULL)
		p = new int;
	*p = x;
}

void MyClass::removePValue() {
	delete p;
}