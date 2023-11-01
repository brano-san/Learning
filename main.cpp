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

using namespace std;

int main()
{
	std::cout <<  "----------Bubble Sort----------" << endl;
	test(bubbleSort);
	std::cout << std::endl << std::endl << "----------Selection Sort----------" << endl;
	test(selectionSort);
	std::cout << std::endl << std::endl << "----------Insertion Sort----------" << endl;
	test(insertionSort);
	std::cout << std::endl << std::endl << "----------QSort Horar Sort----------" << endl;
	test(qSortHorar);
	std::cout << std::endl << std::endl << "----------QSort Lomuto Sort----------" << endl;
	test(qSortLomuto);
}
