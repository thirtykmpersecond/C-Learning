//
// Created by さくらじままい on 2022/11/28.
//
// 读取不定量输入数据
//
#include "iostream"

int main(){
    int sum = 0, value = 0;
    // 读取数据直到文件尾部，计算所有读入值的和。
    while(std::cin >> value)
        sum += value;
    std::cout << "Sum is : " << sum << std::endl;

    return 0;
}