//
// Created by ajay on 11/19/22.
//
#include "ps_1.h"
#include <array>
#include <cmath>
#include <iostream>
// Problem No.1: Find the power of a number using recursion

constexpr auto get_pow_of(int num, unsigned int pow) -> int
{
    if (num == 1 || pow == 0)
    {
        return 1;
    }
    return num * get_pow_of(num, --pow);
}
auto test_get_pow_of() -> void
{
    constexpr std::array dummies{std::pair{1, 10}, std::pair{2, 4},
                                 std::pair{3, 5}, std::pair{10, 2}};
    std::cout<<"expression = actual_result(expected_result)\n";
    for(const auto& dummy:dummies)
    {
        std::cout << dummy.first << '^' << dummy.second  << " = "
                  << get_pow_of(dummy.first , dummy.second ) << '('
                  << std::pow(dummy.first, dummy.second) << ")\n";
    }
}

//Problem No.2: Write a program to calculate the GCD of a given number using recursion