//
// Created by さくらじままい on 2022/11/28.
//
#include "iostream"

int main()
{
    int sum = 0;
    for (int val=-100; val <= 100; ++val)
        sum += val;

    std::cout << sum << std::endl;
    return 0;
}