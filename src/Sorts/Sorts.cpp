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
