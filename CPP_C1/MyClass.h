#pragma once
#ifndef _MYCLASS_H_
#define _MYCLASS_H_
class MyClass{
private:
	int x;
	int* p;
public:
	MyClass();
	MyClass(int x, int* p);
	~MyClass();

	MyClass operator=(const MyClass& mC);

	void print();
	void setX(int x);
	void setPValue(int x);
	void removePValue();
};
#endif