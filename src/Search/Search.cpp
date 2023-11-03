#include "Search.h"

int binarySearch(std::vector<int> const& vec, int const& num, int const& left, int const& right)
{
	if (left >= right) return -1;

	const int middle = left + (right - left) / 2;

	if (num == vec[middle])
		return middle;

	if (num < vec[middle])
		return binarySearch(vec, num, left, middle);
	if (num > vec[middle])
		return binarySearch(vec, num, middle + 1, right);
	return -1;
}

int binarySearch(std::vector<int> const& vec, int const& num)
{
	return binarySearch(vec, num, 0, vec.size());
}

int ternarySearch(std::vector<int> const& vec, int const& num, int const& left, int const& right)
{
	if (left >= right) return -1;
	const int lMiddle = left + (right - left) / 3;
	const int rMiddle = right - (right - left) / 3;

	if (num == lMiddle)
		return lMiddle;
	if (num == rMiddle)
		return rMiddle;

	if (num < lMiddle)
		return ternarySearch(vec, num, left, lMiddle);
	if (num > rMiddle)
		return ternarySearch(vec, num, rMiddle + 1, right);
	return ternarySearch(vec, num, lMiddle + 1, rMiddle);
}

int ternarySearch(std::vector<int> const& vec, int const& num)
{
	return ternarySearch(vec, num, 0, vec.size());
}
