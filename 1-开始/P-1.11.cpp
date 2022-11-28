//
// Created by さくらじままい on 2022/11/28.
//
// 输入两个整数，打印两个整数指定范围内所有整数
#include "iostream"

void print_range(int lo, int hi)
{
    if (lo > hi){
        print_range(hi, lo);
        return;
    }
    while(lo <= hi) {
        std::cout << lo << std::endl;
        ++lo;
    }
}

int main()
{
    int low, high;
    std::cout << "Please input two numbers : " << std::endl;
    std::cin >> low >> high;

    print_range(low, high);

    return 0;
}