// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string.h>
#include<cmath>
#include"declarations.h"
using namespace std;


int main()

{
	const int ia[] = {100, 10 , 47, 96, 79, 64, 29, 83, 49, 13, 92, 65, 53, 21, 13, 34, 41, 63, 38, 54};

	char middleName[50];

	cout << "Enter your middle name: ";

	fgets(middleName, 50, stdin);

	const size_t n = 25 - 5;

	int array[n];

	cout << "\nArray generated is." << endl;

	cout << endl;

	double std = getStandardDeviation(array, n);

	cout << endl;

	cout << "Sample Standard Deviation is: " << std << endl;

}


double getStandardDeviation(int array[], int size)

{

	double mean = 0;

	int sum = 0;

	double squared_diff = 0;

	for (int i = 0; i < size; i++)

		sum += array[i];

	mean = sum / size;

	for (int i = 0; i < size; i++)

	{

		squared_diff += pow((array[i] - mean), 2);

	}

	squared_diff /= size - 1;

	return sqrt(squared_diff);

}


void getRandomNumbersArray(int array[], int size)

{

	for (int i = 0; i < size; i++)

	{

		array[i] = -10 + (rand() * (int)(100 - -10) / RAND_MAX);

	}

}


void printArray(int array[], int size)

{

	for (int i = 0; i < size; i++)

		cout << array[i] << " ";

}