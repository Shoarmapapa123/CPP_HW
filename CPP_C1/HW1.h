#pragma once

#ifndef _HW1_H_
#define _HW1_H_

#include <iostream>
#include <stdio.h>
#include <windows.h>

extern "C" __declspec(dllexport) int sum(int a, int b);
extern "C" __declspec(dllexport) void oddEven(int i);
extern "C" __declspec(dllexport) int power(int b, int e);
extern "C" __declspec(dllexport) bool prime(int i);
extern "C" __declspec(dllexport) int findValueInArray(int A[], int l, int v);
extern "C" __declspec(dllexport) void bubbleSort(int A[], int l);
extern "C" __declspec(dllexport) int GCD(int i, int j);
extern "C" __declspec(dllexport) int LCM(int i, int j);
#endif