//
// Created by ajay on 11/19/22.
//

#ifndef VESIT_DS_LAB_HOMEWORK_PS_1_H
#define VESIT_DS_LAB_HOMEWORK_PS_1_H

#include <array>

namespace ds_lab
{

    // P1
    constexpr auto get_pow_of(int num, unsigned int power) -> int;
    auto test_get_pow_of() -> void;

    // P2
    constexpr auto get_gcd(unsigned int a, unsigned int b) -> unsigned int;
    auto test_get_gcd() -> void;

    // P3
    constexpr auto find(int element, const std::array<int, 10>& array)
        -> unsigned int;
    auto test_find() -> void;

} // namespace ds_lab

#endif // VESIT_DS_LAB_HOMEWORK_PS_1_H
