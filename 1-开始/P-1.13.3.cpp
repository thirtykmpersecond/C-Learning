//
// Created by さくらじままい on 2022/11/28.
//
#include "iostream"

void print_range(int low, int high)
{
    if(low > high)
    {
        print_range(high, low);
        return;
    }

    for(int i=low; i <= high; ++i)
    {
        std::cout << i << std::endl;
    }

}

int main()
{
    int low,high;
    std::cout << "please input 2 numbers : " << std::endl;
    std::cin >> low >> high;

    print_range(low, high);

    return 0;
}