//
// Created by さくらじままい on 2022/11/28.
//
#include "iostream"

int main()
{
    int v1 = 50, val = 0;
    while (v1 <= 100) {
        val += v1;
        ++v1;
    }

    std::cout << "Sum is " << val << std::endl;

    return 0;
}