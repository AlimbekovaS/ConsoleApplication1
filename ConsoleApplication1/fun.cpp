#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void func(int *arr, int size, int *summ, int *mult)
{
	for (int i = 0; i < size; i++)
	{
		*summ += *(arr + i);
	}
	cout << "Sum: " << *summ << endl;
	for (int j = 0; j < size; j++)
	{
		*mult *= *(arr + j);
	}
	cout << "Mult: " << *mult << endl;
}
void mass(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = 1 + rand() % 10;
		cout << array[i] << " ";

	}
}
void mass2(int arr, int row, int col)
{
	int res = 0;
	for (int i = 0;i < row; i++)
	{
		cout << endl;
		for (int j = 0;j < col; j++)
		{
			cout<< arr[i][j];
		}
		cout << endl;
	}
	
	
}