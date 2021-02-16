#include <iostream>
#include <fstream>
#include "HW1.h"
#include "HW2.h"
#include "HW3.h"
int main()
{    
	int n = 9;
	int* p = new int[n];
	fillArray(p, n);
	for (int i = 0; i < n; i++) {
		std::cout << *(p+i) << std::endl;
	}
	delete[] p;
}