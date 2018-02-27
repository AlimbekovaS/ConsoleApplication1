#include<iostream>
#include<stdlib.h>
#include<time.h>
#include "Header.h"
using namespace std;
short int z;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	cout << "Какое задание?";
	cin >> z;
	while (true)
	{
		if (z == 0)
		{
			break;
		}
		else if (z == 1)
		{
			//17.	Написать функцию, которая получает указатель на массив и его размер, и возвращает сумму и произведение его элементов в двух параметрах-ссылках.
			const int size = 5;
			int arr[size];
			int summ = 0, multi = 1;
			int *psumm = &summ;
			int *pmulti = &multi;
			for (int i = 0; i < size; i++)
			{
				arr[i] =1+ rand() % 10;
				cout << arr[i] << " ";
			}
			int *pa = &arr[0];
			func(pa, size, psumm, pmulti);
		}
		else if (z == 2)
		{
			//19.	Написать Функции для распечатки массивов, как одномерных, так и двумерных.
			const int size = 10;
			int array[size];
			int*pa = &array[0];
			mass(pa, size);
		}
		else if (z == 3)
		{
			//19.	Написать Функции для распечатки массивов, как одномерных, так и двумерных. Двумерный
			int arr[2][3] = { { 2, 1, 5 },{ -5, 4, 7 } };
		
			mass2(&arr[0][0], 2, 3);
		}
		break;
	}
	
	system("pause");
}

