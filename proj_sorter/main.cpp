#include <iostream>
#include "Sorter.h"
using namespace std;

void ShowArray(int size, int arr[])
{
	cout << "Array size: " << size;

	cout << "\nArray elements: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	srand(time(0));
	Sorter a;
	int choice;
	int size = 10;
	int* arr = new int[size];

	while (true)
	{
		cout << endl;
		ShowArray(size, arr);
		cout << "\n\n";
		cout << "1 - Randomize array values;\n2 - Change array size;\n";
		cout << "3 - Bubble sort;\n4 - Insert sort;\n5 - Select sort;\n";
		cout << "6 - Quick sort;\n7 - Exit\n--> ";
		cin >> choice;

		cout << "\n\n";

		switch (choice)
		{
		case 1:
		{
			Sorter::RandomizeArrValues(size, arr);
			break;
		}
		case 2:
		{
			Sorter::ChangeArrSize(size, arr);
			break;
		}
		case 3:
		{
			Sorter::BubbleSort(size, arr);
			break;
		}
		case 4:
		{
			Sorter::InsertSort(size, arr);
			break;
		}
		case 5:
		{
			Sorter::SelectSort(size, arr);
			break;
		}
		case 6:
		{
			Sorter::QuickSort(size, arr);
			break;
		}
		case 7:
		{
			return 0;
		}
		}
	}
}