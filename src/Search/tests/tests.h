#pragma once

#include <algorithm>
#include <functional>
#include <iostream>

#include "../src/Sorts/Sorts.h"

void searchTest(std::function<int(std::vector<int>&, int const&)> searcher);