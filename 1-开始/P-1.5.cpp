//
// Created by さくらじままい on 2022/11/27.
//
#include "iostream"

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Please enter 2 numbers :";
    std::cin >> v1 >> v2;
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1*v2;
    std::cout << std::endl;

    return 0;
}