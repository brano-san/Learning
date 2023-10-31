#include <type_traits>
#include <semaphore>
#include <iostream>
#include <Windows.h>
#include <cassert>
#include <vector>
#include <string>
#include <chrono>
#include <array>
#include <list>
#include <set>

#include "src/Thread Ping-Pong/PingPong.hpp"
#include "src/Compile-time factorial/Factorial.h"
#include "src/Random/Random.h"
#include "src/Stringizing/TokenStringizing.h"
#include "src/Timer/Timer.hpp"
#include "src/Sorts/Sorts.h"

using namespace std;

int main()
{
	std::vector vec({ 8, 7, 11, 3, 2, 1, 2, 1, 6 });
	selectionSort(vec);
	print(vec);
}
