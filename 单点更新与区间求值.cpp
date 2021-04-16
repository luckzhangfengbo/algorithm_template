/*************************************************************************
	> File Name: 单点更新与区间求值.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 11:57:53 2021
 ************************************************************************/
//是在树状数组的基础上去实现求值
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

int main() {
    int n , m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        add(i, a);
    }
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            add(b, c);
        }
        if (a == 2) {
            cout << getsum(c) - getsum(b - 1) << endl;
        }
    }
    return 0;
}
