#include "HW8.h"
#include <string>
#include <iostream>
bool hasRoad(const unsigned char field) {
	return hasBit(field, road_mask);	
}
void setRoad(unsigned char& field) {
	
	field = field | road_mask;
}
void removeTreasure(unsigned char& field) {
	field = field & ~treasure_mask;
}
bool allowsExtraction(const unsigned char field) {
	//terrain must be 0,1 or 1,0 => 64 , 128
	return ((field&can_extract_mask_one)==can_extract_mask_one)||((field&can_extract_mask_two)==can_extract_mask_two);
}

int getPlayerID(const unsigned char player) {
	//playerbits => 16,32,64,128
	const unsigned char pState = player >> 4;
	return pState;
}
void setPlayerID(unsigned char& player, int i) {
	unsigned char id = i;
	id = id << 4;
	unsigned char reset = 15;
	reset = reset << 4;
	player = player | reset;
	id += 15;
	player = player & id;
}
bool hasBit(const unsigned char field, int i) {
	return (field & i) == i;
}

//XOR cipher
char* cipherStory(const char story[1024], const char letter) {	
	char newStory[1024];
	char* buffer = new char[1024];
	for (int i = 0; i < 1024; i++) {		
		newStory[i] = story[i] ^ letter;
		*(buffer + i) = story[i];
	}
	buffer = newStory;
	return buffer;
}












char* cipherStory(const char story [1024], const char word [16]) {
	char newStory[1024];
	strcpy_s(newStory,1024,story);
	for (int i = 0; i < 16; i++) {
		strcpy_s(newStory, 1024, cipherStory(newStory, word[i]));		
	}
	return newStory;
}