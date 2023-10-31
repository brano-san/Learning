#pragma once
#include <cassert>
#include <iostream>
#include <vector>
#include <list>
#include <set>

#define TO_STR_IMPL(s) #s
#define TO_STR(s) TO_STR_IMPL(s)

/// Test expressions
#define EXPR_A (((((((((((5)))))))))) - (((((((((6))))))))))

inline void tokenStringizing()
{
	std::cout << "EXPR_A:              " << EXPR_A << std::endl;
	std::cout << "TO_STR_IMPL(EXPR_A): " << TO_STR_IMPL(EXPR_A) << std::endl;
	std::cout << "TO_STR(EXPR_A):      " << TO_STR(EXPR_A) << std::endl;
}