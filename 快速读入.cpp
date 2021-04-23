/*************************************************************************
	> File Name: 快速读入.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/23 12:45:04 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;



inline int read() {
    register int x = 0, f = 1;
    char c = getchar();
    while (c <= '0' || c >= '9') {
        if (c == '-')f = -1;
        c = getchar();

    }
    while (c >= '0' && c <= '9') {
        x = x  * 10 + x - '0';
        c = getchar();
    }
    return x * f;
}
