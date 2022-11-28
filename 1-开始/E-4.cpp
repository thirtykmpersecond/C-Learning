//
// Created by さくらじままい on 2022/11/28.
//
// for 循环
//
#include "iostream"

int main()
{
    int sum = 0;
    // 1加到10
    for(int val=1; val<=10; ++val)
        sum += val;
    std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}
