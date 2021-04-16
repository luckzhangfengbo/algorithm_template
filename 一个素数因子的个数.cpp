/*************************************************************************
	> File Name: 一个素数因子的个数.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 13:05:32 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

#define max_n 1000000


int prime[max_n + 5];
void init() {
    for (int i = 2; i < max_n; i++) {
        if (prime[i])  continue;
        for (int j = i; j <= max_n; j++) {
            prime[j] += i;
        }
    }
}


int main() {
    init();
    for (int i = 2; i <= 30; i++) {
        cout << prime[i] << " ";
    }
    return 0;
}
