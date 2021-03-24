#include "HW2.h"
#include "HW1.h"
#include <fstream>
#include <iostream>
#include <string>

void fractionSimplifier(int a, int b) {
	int gcd = GCD(a, b);
	a /= gcd;
	b /= gcd;
}

void printNames() {
	//first indicates entries, second indicates length 
	const int amount = 5;
	const int maxlength = 30;
	char names[amount][maxlength] = {"Herman", "Ash Ketchum", "Alfred", "Frederik Ludgardson","Heinrich Grünenwald"};
	for (int i = 0;i < amount;i++) {
		for (int j = 0;j < maxlength;j++) {
			if (names[i][j] == '\0') {
				std::cout << '\n';
				break;
			}
			else {
				std::cout << names[i][j];
			}
		}
	}
}

bool isPalindrome(char s[]) {
	_strlwr_s(s,strlen(s)+1);
	int p2 = strlen(s)-1;
	int p1 = 0;
	while (p2 >= p1) {
		if (s[p1] != s[p2]) {
			return false;
		}
		p1++;
		p2--;
	}
	return true;
}

void readTXT(char s[]){
	std::fstream inputFile;
	inputFile.open(s);
	std::string line;
	if (inputFile.is_open())
	{
		while (std::getline(inputFile, line))
		{
			std::cout << line << '\n';
		}
		inputFile.close();
	}

	else std::cout << "Unable to open file";

}