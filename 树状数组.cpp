/*************************************************************************
	> File Name: 树状数组.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 11:23:39 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

#define lowbit(x) ((x) & (-x))

#define MAX_N 200005
long long c[MAX_N + 5] = {0};
long long n;
void add(long long x, long long val) {
    while (x <= n) {
        c[x] += val;
        x += lowbit(x);
    }
}


long long getsum(long long x) {
    long long sum = 0;
    while (x) {
        sum += c[x];
        x -=  lowbit(x);
    }
    return sum;
}
