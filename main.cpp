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


using namespace std;

int main()
{
	pingPong();
}
