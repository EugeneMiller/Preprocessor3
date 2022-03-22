#pragma once
#include<iostream>
#define foritosize(begin) for (size_t i = begin; i < size; i++) 

using namespace std;

//Вывести целочисленный массив в консоль
void showArrInt(int* arr, size_t size) {
	foritosize(0)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//Вывести символьный массив в консоль
void showArrChar(char* arr, size_t size) {
	foritosize(0)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

//Получить максимальное значение
int getMaxInt(int* arr, size_t size) {
	int max = arr[0];
	foritosize(1)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

char getMaxChar(char* arr, size_t size) {
	char max = arr[0];
	foritosize(1)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

//Получить минимальное значение
int getMinInt(int* arr, size_t size) {
	int min = arr[0];
	foritosize(1)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

char getMinChar(char* arr, size_t size) {
	char min = arr[0];
	foritosize(1)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}