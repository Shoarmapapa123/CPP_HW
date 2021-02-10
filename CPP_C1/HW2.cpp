#include "HW2.h"
#include "HW1.h"
//TODO OPGAVEN 2,5,7-9

//TODO change to call by reference
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

//TODO ADD IN HEADER
void readTXT(){

}

//TODO ADD IN HEADER
struct PlayerState {
	char name[20];
	int level;
	double health;
	int experience;
};