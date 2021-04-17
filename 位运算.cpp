/*************************************************************************
	> File Name: 位运算.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 13:50:27 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//求n的第k位数字： n >> k & 1
//返回n的最后一位1 : lowbit(n) = n & (-n)


#define lowbit(x) ((x) & (-x))

//2. n & (n - 1)将整数n的最后一位为1的位变为0， 也可以判断n是否为2的幂

//求二进制中1的个数

int onecount(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

//判断一个数是不是2的幂
int func(int n) {
    return n & (n - 1);
}
//判断一个数是不是4的幂
int func2(int n) {
    if (n & (n - 1)) {
        return (n & 0x55555555);
    }
}

//判断int变量n是奇数还是偶数

a & 1 = 0 //奇数
a & 1 = 1 //偶数


//利用二进制进行枚举子集



for (int i = 0; i < (1 << n); i++) {
    for (itn j = 0; j < n; j++) {
        if (i & (1 << j)) {
            cout << a[j] << " ";
        }
    }
    cout << endl;
}

