//
// Created by さくらじままい on 2022/11/28.
//
#include "iostream"
int main()
{
    int sum = 0, val = 1;
    //val<=10,while继续执行
    while(val <= 10) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
    << sum << std::endl;

    return 0;
}