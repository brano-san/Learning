#pragma once
#include <chrono>
#include <iostream>
#include <functional>

class ScopedTimer
{
public:
	ScopedTimer()
	{
		_start = std::chrono::steady_clock::now();
	}

	~ScopedTimer()
	{
		const auto end = std::chrono::steady_clock::now();
		const std::chrono::duration<double> time = end - _start;
		std::cout << std::fixed << time.count() << std::endl;
	}

private:
	std::chrono::time_point<std::chrono::steady_clock> _start;
};

class Timer
{
public:
	void start()
	{
		_start = std::chrono::steady_clock::now();
	}

	void end()
	{
		_end = std::chrono::steady_clock::now();
	}

	auto getElapsedTime()
	{
		const std::chrono::duration<double> time = _end - _start;
		return time;
	}

private:
	std::chrono::time_point<std::chrono::steady_clock> _start;
	std::chrono::time_point<std::chrono::steady_clock> _end;
};

inline void windowsTest(std::function<void()> const& funcToTest)
{
	double ans{};
	LARGE_INTEGER startingTime, endingTime, elapsedMicroseconds;
	LARGE_INTEGER frequency;

	QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&startingTime);

	for (int i = 0; i < 1000000; ++i)
	{
		funcToTest();
	}

	QueryPerformanceCounter(&endingTime);
	elapsedMicroseconds.QuadPart = endingTime.QuadPart - startingTime.QuadPart;

	elapsedMicroseconds.QuadPart *= 10;
	elapsedMicroseconds.QuadPart /= frequency.QuadPart;

	std::cout << elapsedMicroseconds.QuadPart << std::endl;
}