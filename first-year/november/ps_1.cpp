//
// Created by ajay on 11/19/22.
//
#include "ps_1.h"
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <numeric>

namespace ds_lab
{
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
        std::cout << "expression = actual_result(expected_result)\n";
        for (const auto& dummy : dummies)
        {
            std::cout << dummy.first << '^' << dummy.second << " = "
                      << get_pow_of(dummy.first, dummy.second) << '('
                      << std::pow(dummy.first, dummy.second) << ")\n";
        }
    }

    // Problem No.2: Write a program to calculate the GCD for a given set of
    // numbers using recursion
    constexpr auto is_prime(unsigned int num) -> bool
    {
        if (num == 0 or num == 1)
        {
            return false;
        }
        for (unsigned int i{2}; i <= (num / 2); ++i)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    auto test_is_prime() -> void
    {
        constexpr std::array numbers{1, 2, 3, 4, 5, 8, 9, 13, 17, 21, 997};
        for (auto num : numbers)
        {
            std::cout << num << " is" << (is_prime(num) ? " " : " not ")
                      << "prime\n";
        }
    }

    constexpr auto get_gcd(unsigned int a, unsigned int b) -> unsigned int
    {
        if (a == 1 or b == 1 or is_prime(a) or is_prime(b))
        {
            return 1;
        }
        if (b > a)
        {
            std::swap(a, b);
        }
        unsigned int rem{0};
        while (b != 0)
        {
            rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    auto test_get_gcd() -> void
    {
        constexpr std::array dummies{std::pair{12, 33}, std::pair{2, 5},
                                     std::pair{12, 10}, std::pair{15, 20},
                                     std::pair{13, 17}, std::pair{1, 8},
                                     std::pair{0, 88}};
        std::cout << "expression = actual_result(expected_result)\n";
        for (const auto& dummy : dummies)
        {
            std::cout << "GCD(" << dummy.first << ',' << dummy.second
                      << ") = " << get_gcd(dummy.first, dummy.second) << '('
                      << std::gcd(dummy.first, dummy.second) << ")\n";
        }
    }

    // Problem No.3 : Write a program to find the given element in an integer
    // array
    constexpr auto find(int element, const std::array<int, 10>& array)
        -> unsigned int
    {
        for (unsigned int index{0}; index < array.size(); ++index)
        {
            if (array.at(index) == element)
            {
                return index;
            }
        }
        return -1;
    }

    auto test_find() -> void
    {
        constexpr std::array<int, 10> integers{8, 4, 2, 3, 1, -89, 10, 13};
        if (find(33, integers) == 4)
        {
            std::cout << "Found the element\n";
        }
        else
        {
            std::cout << "Element not found\n";
        }
    }
} // namespace ds_lab