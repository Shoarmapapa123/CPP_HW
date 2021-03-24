#pragma once

#ifndef _HW2_H_
#define _HW2_H_

#include <iostream>
#include <stdio.h>
#include <windows.h>

void fractionSimplifier(int a, int b);
void printNames();
bool isPalindrome(char s[]);
void readTXT(char s[]);
struct PlayerState {
	char name[20];
	int level;
	double health;
	int experience;
};
#endif