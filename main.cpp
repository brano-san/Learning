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
#include "src/Sorts/tests/tests.h"
#include "src/Search/Search.h"
#include "src/Search/tests/tests.h"

using namespace std;

int main()
{
	cout << "-----------Binary Search-----------" << endl;
	searchTest(binarySearch);
	cout << endl << endl << "-----------Ternary Search-----------" << endl;
	searchTest(ternarySearch);
}
