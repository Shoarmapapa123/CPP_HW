#pragma once
#ifndef _HW8_H_
#define _HW8_H_
const unsigned char road_mask = 8;
const unsigned char treasure_mask = 2;
const unsigned char can_extract_mask_one = 64;
const unsigned char can_extract_mask_two = 128;
bool hasRoad(const unsigned char field);
void setRoad(unsigned char& field);
void removeTreasure(unsigned char& field);
bool allowsExtraction(const unsigned char field);
int getPlayerID(const unsigned char player);
void setPlayerID(unsigned char& player, int i);
bool hasBit(const unsigned char field, int i);
char* cipherStory(const char story [1024], const char word [16]);
char* cipherStory(const char story[1024], const char letter);
#endif