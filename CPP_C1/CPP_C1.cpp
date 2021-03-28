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



	char story[1024] = "Dit is een mooi verhaal";
	char letter = 'i';
	char word[16] = "Word";
	char cipheredStoryLetter[1024];
	strcpy_s(cipheredStoryLetter,1024,cipherStory(story,letter));
	char decipheredStoryLetter[1024];
	//strncpy_s(decipheredStoryLetter, cipherStory(cipheredStoryLetter, letter),_TRUNCATE);
	//char* cipheredStoryWord = cipherStory(story, word);
	std::cout << "STORY: " << story<<std::endl;
	std::cout << "LETTER: " << letter << std::endl;
	std::cout << "WORD: " << word << std::endl;
	std::cout << "CIPHERED STORY (LETTER): " <<cipheredStoryLetter <<std::endl;
	//std::cout << "DECIPHERED STORY (LETTER): " << decipheredStoryLetter << std::endl;

}