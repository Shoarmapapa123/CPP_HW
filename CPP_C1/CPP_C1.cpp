#include <iostream>
#include <fstream>
#include "HW1.h"
#include "HW2.h"
#include "HW3.h"
#include "MyClass.h"
#include "MyStack.h"
#include "HW5.h"
#include "MyBST.h"
#include "Fraction.h"
#include "HW8.h"

//TODO HW2 => struct excercise
int main()
{
	/*MyBST<int> tree;
	for (int i = 0; i < 10; i++) {
		tree.insert(i);
	}
	tree.traverse();
	MyBST<double> tree2;
	std::cout << std::endl;
	for (double d = 0.0;d < 10.0;d+=1.2) {
		tree2.insert(d);
	}
	tree2.traverse();
	std::cout << tree.depth();
	*/
	unsigned char field = 2;
	setRoad(field);
	if (hasRoad(field))
		std::cout << "HAS ROAD" << std::endl;
	else
		std::cout << "HASN'T ROAD" << std::endl;
	removeTreasure(field);
	unsigned char player = 128+16;
	std::cout << getPlayerID(player)<<std::endl;
	setPlayerID(player, 1);
	std::cout << getPlayerID(player) << std::endl;

}