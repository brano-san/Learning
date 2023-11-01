#include "Sorts.h"
#include <iostream>

void print(std::vector<int> const& vec)
{
	for (int const& el : vec)
	{
		std::cout << el << " ";
	}
	std::cout << std::endl;
}

void bubbleSort(std::vector<int>& vec)
{
	for (int i = 0; i < vec.size(); ++i)
	{
		for (int j = 0; j < vec.size() - i - 1; ++j)
		{
			if (vec[j] > vec[j + 1])
				std::swap(vec[j], vec[j + 1]);
		}
	}
}

void insertionSort(std::vector<int>& vec)
{
	for (int i = 1; i < vec.size(); ++i)
	{
		for (int j = i; j > 0 && vec[j] < vec[j - 1]; --j)
		{
			std::swap(vec[j], vec[j - 1]);
		}
	}
}

void selectionSort(std::vector<int>& vec)
{
	int min = 0;
	for (int i = 0; i < vec.size(); ++i)
	{
		min = i;
		for (int j = i + 1; j < vec.size(); ++j)
		{
			if (vec[min] > vec[j])
				min = j;
		}
		std::swap(vec[min], vec[i]);
	}
}

int partition(std::vector<int>& vec, int left, int right)
{
	int pivot = vec[left], j = left;

	for (int i = left + 1; i < right + 1; ++i)
	{
		if (pivot > vec[i])
		{
			++j;
			std::swap(vec[i], vec[j]);
		}
	}
	std::swap(vec[left], vec[j]);

	return j;
}

void qSortL(std::vector<int>& vec, int left, int right)
{
	if (right - left <= 0) return;

	const int h = partition(vec, left, right);

	qSortL(vec, left, h - 1);
	qSortL(vec, h + 1, right);
}

void qSortH(std::vector<int>& vec, int left, int right)
{
	if (right - left <= 0) return; 
	const int pivot = vec[left];
	int i = left, j = right;

	while (i < j)
	{
		while (vec[i] < pivot)
			i++;
		while (vec[j] > pivot)
			j--;

		if (i <= j)
			std::swap(vec[i++], vec[j--]);
	}

	qSortH(vec, left, j);
	qSortH(vec, i, right);
}

void qSortHorar(std::vector<int>& vec)
{
	qSortH(vec, 0, vec.size() - 1);
}

void qSortLomuto(std::vector<int>& vec)
{
	qSortL(vec, 0, vec.size() - 1);
}
