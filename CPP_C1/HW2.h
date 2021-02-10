#pragma once

#ifndef _HW2_H_
#define _HW2_H_

#include <iostream>
#include <stdio.h>
#include <windows.h>

extern "C" __declspec(dllexport) void fractionSimplifier(int a, int b);
extern "C" __declspec(dllexport) void printNames();
extern "C" __declspec(dllexport) bool isPalindrome(char s[]);
#endif