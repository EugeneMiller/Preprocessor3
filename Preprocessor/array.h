#pragma once
#include<iostream>
#include "array.cpp"

//void showArrInt(int* arr, size_t size);
//int getMaxInt(int* arr, size_t size);
//int getMinInt(int* arr, size_t size);

void showArrChar(char* arr, size_t size);
char getMaxChar(char* arr, size_t size);
char getMinChar(char* arr, size_t size);

#ifdef INTEGER
#define showArrT showArrInt
#define getMaxT getMaxInt
#define getMinT getMinInt
#endif
#ifdef CHAR
#define showArr showArrChar
#define getMax getMaxChar
#define getMin getMinChar
#endif