/*************************************************************************
	> File Name: 快排.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/14 00:23:55 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

const int N = 1e6+7;
int q[N] = {0};


void quick_sort(int *q, int l, int r) {
    if (l >= r) return ;
    int i = l - 1, j = r + 1, x = q[(l + 1) >> 1];
    while (i < j) {
        do i++;while (q[i] < x);
        do j--;while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}


int main() {
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++) {
        cin >> q[i];
    }
    quick_sort(q, 0, n);
    for (int i = 1; i < n; i++) {
        cout << q[i] << " " ;
    }
    cout << endl;
    return 0;
}
