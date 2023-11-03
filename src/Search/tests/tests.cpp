#include "tests.h"
#include "../src/Random/Random.h"
#include "../src/Search/Search.h"

#include <algorithm>
#include <functional>
#include <iostream>

void searchTest(std::function<int(std::vector<int>&, int const&)> searcher)
{
	std::vector<std::vector<int>> vectors
	{
		{ 9, 8, 7, 6, 5, 4, 3, 2, 1 },
		{ 564, 453, 452, 123, 99, 9, 2 },
		{ 34237123, 7123672, 12344, 1234, 1244714, 1238451, 1, 0, -21344 },
		{ 123, 22, 414, 12345, 1788, 4562, 12, 1, 0 }
	};

	bool isRight = true;
	for (unsigned int i = 0; i < vectors.size(); ++i)
	{
		std::ranges::sort(vectors[i].begin(), vectors[i].end());
		const int index = random<int>(0, vectors[i].size() - 1);
		const int found = binarySearch(vectors[i], vectors[i][index]);
		print(vectors[i]);
		std::cout << "Index = " << index << "; Found = " << found << std::endl;

		if (found >= 0)
			std::cout << "vec[Index] = " << vectors[i][index] <<
			" ; vec[Found] = " << vectors[i][found] << std::endl;
		else
			std::cout << "There is no that number in sequence" << std::endl;
		if (found != index && found >= 0)
		{
			isRight = false;
		}
	}

	if (isRight)
		std::cout << "-----------TEST PASSED-----------" << std::endl;
	else
		std::cout << "-----------TEST FAILED-----------" << std::endl;
}