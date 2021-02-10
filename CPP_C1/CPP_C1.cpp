#include <iostream>
#include <fstream>
#include "HW1.h"
#include "HW2.h"
int main()
{    
	oddEven(1);
	oddEven(2);
	int a = 2;
	int b = 4;
	fractionSimplifier(a, b);
	//std::cout << a;
	char l[10] = { "lepel" };
	char l2[10] = { "Lepel" };
	char z[10] = { "zeef" };
	std::cout << isPalindrome(l);
	std::cout << isPalindrome(z);
	std::cout << isPalindrome(l2);
	if (isPalindrome(l)) {
		std::cout << "\nYEET\n";
	}
	//printNames();
}