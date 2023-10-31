#pragma once
#include <random>

template<typename T>
T random(T const& min, T const& max)
{
	std::random_device engine;
	std::mt19937 mt(engine());

	if constexpr (std::is_floating_point_v<T>)
	{
		std::uniform_real_distribution<T> dist(min, max);
		return dist(mt);
	}
	else
	{
		std::uniform_int_distribution<T> dist(min, max);
		return dist(mt);
	}
}