#include "HW3.h"
//TODO only done 2...
void fillArray(int* p, int n) {
	for (int i = 0; i < n; i++) {
		*(p + i) = i + 1;
	}
}