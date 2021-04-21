/*************************************************************************
	> File Name: 最长不上升子序列.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/21 06:07:22 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;


/*
*输入
5
9 3 6 2 7
输出
3
* */

#define MAX_N 2003
int a[MAX_N + 5], d[MAX_N + 5];

int main() {
    int n;
    cin >> n;
    for (int i =1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = n  - 1; i >= 0; i--) {
        for(int j = i + 1;j <= n; j++) {
            if (a[i] > a[j]) {
                d[i] = max(d[i], d[j] + 1);
            }
        }
    }
    int temp = d[1];
    for (int i = 1; i <= n; i++) {
        if (d[i] > temp) temp = d[i];
    }
    cout << temp + 1 << endl;
    return 0;
}
