#include "HW8.h"
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
	player = player ^~id;
}
bool hasBit(const unsigned char field, int i) {
	return (field & i) == i;
}