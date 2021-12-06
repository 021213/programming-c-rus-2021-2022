#pragma once
#include<iostream>
using namespace std;

int* createArray(int length);

void deleteArray(int* arr);

void printArray(int* arr, int length);

/// <summary>
/// Заполнение массива случайными двузначными числами
/// </summary>
void randomizeArray(int* arr, int length);