/*************************************************************************
	> File Name: 一维差分.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 13:33:37 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;


//给区间[l, r]中每个数字都加上C: B[l] += C, B[r + 1] -= C;

const int N = 1000100;
int a[N], b[N];
void insert(int l, int r, int c) {
    b[l] += c;
    b[r + 1] -= c;
}

int main() {
    int n, m ;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        insert(i, i, a[i]);
    }
    while (m--) {
        int l, r, c;
        cin >> l >> r >> c;
        insert(l, r, c);
    }
    for (int i = 1; i <= n; i++) {
        b[i] += b[i - 1];
    }
    for (int i  = 1; i <= n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
