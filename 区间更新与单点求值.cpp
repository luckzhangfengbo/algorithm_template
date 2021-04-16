/*************************************************************************
	> File Name: 区间更新与单点求值.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 12:02:11 2021
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


int main() {
    int n, m ;
    cin >> n >> m;
    int now = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        add(i, a - now);
        now = a;
    }
    for (int i = 1; i <= m; i++) {
        int a;
        cin >>a;
        if (a == 1) {
            int x, y, z;
            cin >> x >> y >> z;
            add(x, z);
            add(y + 1, -z);
        }
        if (a == 2) {
            int x;
            cin >> x;
            cout << getsum(x) << endl;
        }
    }
    return 0;
}
