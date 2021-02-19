#include <iostream>
#include <fstream>
#include "HW1.h"
#include "HW2.h"

struct PlayerState {
	char name[20];
	int level;
	double health;
	int experience;
};
//TODO HW2 => struct excercise
int main()
{    
	std::cout<<GCD(2, 3);
	char file[20] = "hw2.txt";
	readTXT(file);
	PlayerState s1{"Henk",2,20.0,4};
	PlayerState s2{ "Alfrodo",2,20.0,4 };
	PlayerState s3{ "Dodo",2,20.0,4 };
	PlayerState states[3] = { s1,s2,s3 };

}

