#include <iostream>
#include <fstream>
#include "HW1.h"
#include "HW2.h"
#include "HW3.h"
#include "MyClass.h"
#include "MyStack.h"

//TODO HW2 => struct excercise
int main()
{
	/*int** p = new int*;
	int n = 5;
	pascalTriangle(p, n);
	printPascalTriangle(p, n);
	deletePascalTriangle(p, n);*/
	MyStack m;
	m.print();
	m.push(101);
	m.print();
	m.push(220);
	m.print();
	m.push(352);
	m.print();
	std::cout << "POPPING: " << m.pop() << std::endl;
	m.print();
	std::cout << "SUM: " << m.sum() << std::endl;
}

