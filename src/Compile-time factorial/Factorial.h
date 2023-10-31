#pragma once
template<int T>
class Factorial	
{
public:
	constexpr static int value = T * Factorial<T - 1>::value;
};

template<>
class Factorial<1>
{
public:
	constexpr static int value = 1;
};

inline void factorial()
{
	std::cout << Factorial<5>::value << std::endl;
}