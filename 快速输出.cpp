/*************************************************************************
	> File Name: 快速输出.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/23 12:47:55 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;



inline void write(register int x) {
    
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 0) {
        write(x / 10);
    }
    putchar(x % 10 + '0');
}
