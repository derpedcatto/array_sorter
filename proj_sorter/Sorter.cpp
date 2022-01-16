#include <iostream>
#include "Sorter.h"
using namespace std;

//----------------------------------------------------------------------// Служебные функции, которые используются только для QuickSort
void val_swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int QuickSortPartition(int* arr, int start, int pivot)
{
	int low = start - 1;
	int high = pivot - 1;

	for (int j = start; j <= high; j++)
	{
		if (arr[j] <= arr[pivot])
		{
			low++;
			val_swap(&arr[low], &arr[j]);
		}
	}

	val_swap(&arr[low + 1], &arr[pivot]);

	return low + 1;
}
void QuickSortAlgorithm(int* arr, int start, int pivot)
{
	if (start < pivot)
	{
		int new_pivot = QuickSortPartition(arr, start, pivot);

		QuickSortAlgorithm(arr, start, new_pivot - 1);
		QuickSortAlgorithm(arr, new_pivot + 1, pivot);
	}
}
//----------------------------------------------------------------------// Служебные функции, которые используются только для QuickSort

void Sorter::RandomizeArrValues(int size, int* arr)
{
	int min, max;

	cout << "Enter min value: ";
	cin >> min;

	cout << "Enter max value: ";
	do
	{
		cin >> max;

	} while (max <= min);

	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % max - min + 1;
	}
}

void Sorter::ChangeArrSize(int& size, int*& arr)
{
	int tmp_size;
	int* tmp_arr;

	cout << "Enter new size: ";
	cin >> tmp_size;

	tmp_arr = new int[tmp_size];

	if (size > tmp_size)
	{
		for (int i = 0; i < tmp_size; i++)
		{
			tmp_arr[i] = arr[i];
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			tmp_arr[i] = arr[i];
		}
		for (int i = size; i < tmp_size; i++)
		{
			tmp_arr[i] = 0;
		}
	}

	size = tmp_size;
	delete[] arr;
	arr = tmp_arr;
}

void Sorter::BubbleSort(int size, int* arr)
{
	bool end = false;
	while (!end)
	{
		end = true;
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j + 1], arr[j]);
				end = false;
			}
		}
	}
}

void Sorter::InsertSort(int size, int* arr)
{
	for (int i = 1; i < size; i++)
	{ 
		if (arr[i] < arr[i - 1])
		{
			for (int j = i; j > 0; j--)
			{
				if (arr[j] < arr[j - 1])
				{
					swap(arr[j], arr[j - 1]);
				}
				else
				{
					break;
				}
			}
		}
	}
}

void Sorter::SelectSort(int size, int* arr)
{
	for (int i = 0; i < size - 1; i++)
	{
		int select;
		bool end = false;

		for (int j = i; j < size; j++)
		{
			if (!end && arr[i] > arr[j])
			{
				select = j;
				end = true;
			}
			else if (end && arr[select] > arr[j])
			{
				select = j;
			}
		}

		if (end)
		{
			swap(arr[select], arr[i]);
		}
	}
}

void Sorter::QuickSort(int size, int* arr)
{
	int start = 0;
	int pivot = size - 1;
	QuickSortAlgorithm(arr, start, pivot);
}