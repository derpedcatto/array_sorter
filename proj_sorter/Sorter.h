#pragma once

/*
Создать класс Sorter, который будет содержать в себе:
статические методы, реализующие разные алгоритмы сортировки одномерных массивов (Bubble, Insert, Select, Quick).
массивы могут быть любого типа, любых размеров (по количеству элементов).
*/

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