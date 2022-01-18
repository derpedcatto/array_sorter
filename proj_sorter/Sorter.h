#pragma once

class Sorter
{
public:
	static void RandomizeArrValues(int size, int* arr);
	static void ChangeArrSize(int& size, int*& arr);
	static void BubbleSort(int size, int* arr);
	static void InsertSort(int size, int* arr);
	static void SelectSort(int size, int* arr);
	static void QuickSort(int size, int* arr);
};
