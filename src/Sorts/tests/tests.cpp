#include "tests.h"

#include <algorithm>
#include <iostream>

#include "../src/Sorts/Sorts.h"

void test(std::function<void(std::vector<int>&)> sort)
{
	std::vector<std::vector<int>> vectors
	{
		{ 9, 8, 7, 6, 5, 4, 3, 2, 1 },
		{ 564, 453, 452, 123, 99, 9, 2 },
		{ 34237123, 7123672, 12344, 1234, 1244714, 1238451, 1, 0, -21344 },
		{ 123, 22, 414, 12345, 1788, 4562, 12, 1, 0 }
	};
	auto vectors1 = vectors;
	for (unsigned int i = 0; i < vectors.size(); ++i)
	{
		std::cout << "Expected result: " << std::endl;
		std::ranges::sort(vectors1[i].begin(), vectors1[i].end());
		print(vectors1[i]);
		std::cout << "My result: " << std::endl;
		sort(vectors[i]);
		print(vectors[i]);
	}
	if (vectors == vectors1)
		std::cout << "-----------TEST PASSED-----------" << std::endl;
	else
		std::cout << "-----------TEST FAILED-----------" << std::endl;
}