//
// Created by さくらじままい on 2022/11/28.
//
#include "iostream"

int main()
{
    // currVal我们正在统计的数，新值放入val
    int currVal = 0, val = 0;
    // 读取第一个数
    if(std::cin >> currVal){
        int cnt = 1;                // 保存正在处理的当前值个数
        while(std::cin >> val){     // 读取剩余的数
            if (val == currVal)     // 如果值相同
                ++cnt;
            else{
                std::cout << currVal << " occurs "
                <<cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;            //重置计数器
            }
        }
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}