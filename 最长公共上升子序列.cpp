/*************************************************************************
	> File Name: 最长公共上升子序列.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/21 06:02:23 2021
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
    4
    2 2 1 3
    2 1 2 3
 输出
 2
 * */

#define N 2005
int a[N], b[N];
int f[N][N];
int n;

int main() {
    cin >> n;
    for (int i = 1;  i<= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) {
        int maxv = 0;
        for (int j = 1; j <= n; j++) {
            f[i][j] = f[i - 1][j];
            if (a[i] == b[j]) f[i][j] = max(f[i][j], maxv + 1);
            if (b[j] < a[i]) maxv = max(maxv, f[i][j]);
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res = max(res, f[n][i]);
    }
    cout << res << endl;
    return 0;
}
