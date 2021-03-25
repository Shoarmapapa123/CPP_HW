#include "HW5.h"
#include <cstdlib>
#include <iostream>
const int a = 505;
const int c = 33;
const int m = INT_MAX/a;
int rNG() {
	static int number = 1;
	number = (a * number + c) % m;
	return number;
}
int rNG(int min, int max) {
	if (min == max) {
		return min;
	}
	else {
		int random = rNG();
		int diff = max - min;
		return random % (diff + 1) + min;
	}
}
int* randomArray(int n) {
	int* ints = new int[n];
	int* returnInts = new int[n];
	int size = n;
	for (int i = 0; i < n; i++) {
		*(ints + i) = i + 1;
	}
	for (int index = 0; index < n;index++) {
		int rIndex = rNG(0, size-1);
		*(returnInts+index) = *(ints+rIndex);
		size--;
		int* newInts = new int[size];
		int nIndex = 0;
		for (int i = 0; i <= size; i++) {
			if (i != rIndex) {
				*(newInts + nIndex) = *(ints + i);
				nIndex++;
			}
		}
		delete[] ints;
		ints = new int[size];
		memcpy(ints, newInts, size * sizeof(int));
		delete[] newInts;
	}
	delete[] ints;
	return returnInts;
}