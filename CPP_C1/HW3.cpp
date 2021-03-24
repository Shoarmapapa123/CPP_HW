#include "HW3.h"

void eOne(int*& p, int*& q, int*& r) {
	*p = 2;
	*q = 3;
	std::cout << *p<<std::endl;
	std::cout << *q<<std::endl;
	r = p;
	p = q;
	q = r;
	std::cout << *p<<std::endl;
	std::cout << *q<<std::endl;
};

void fillArray(int*& p, int n) {
	for (int i = 0; i < n; i++) {
		*(p + i) = i + 1;
	}
}

//should be done in main otherwise big bad happens
void pascalTriangle(int** &p, int n) {
	//inits pointer array of layer pointers
	p = new int* [n];	
	for (int i = 0; i < n;i++) {
		//inits pointer array per layer
		p[i] = new int[i + 1];
		for (int j = 0; j < i + 1;j++) {
			if (j == 0 || j == i) {
				p[i][j] = 1;
			}
			else {				
				p[i][j] = p[i-1][j-1] + p[i-1][j];
			}
		}
	}
}

void printPascalTriangle(int** &p, int n) {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < i + 1;j++) {
			std::cout << p[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void deletePascalTriangle(int**& p, int n) {
	for (int i = 0;i < n;i++) {
		delete[] p[i];
	}
	delete[] p;
}
