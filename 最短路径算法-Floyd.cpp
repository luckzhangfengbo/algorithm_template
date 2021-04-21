/*************************************************************************
	> File Name: 最短路径算法-Floyd.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/21 06:13:27 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;

int n, m, s, ans[1000][1000];

int main() {
    memset(ans, 0x3F, sizeof(ans));
    cin >> n >> m >> s;
    for (int i = 0; i < m ; i++) {
        int a , b , c;
        cin >> a >> b >>c;
        ans[a][b] = c;
    }
    for (int i = 1; i <= n; i++) {
        ans[i][i] = 0;
    }
    for (int i = 1; i<= n; i++) {
        for (int j = 1; j <- n; j++) {
            for (int k = i; k <= n; k++) {
                ans[j][k] = min(ans[j][k], ans[j][i] + ans[i][k]);
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        cout << ans[s][i];
    }
    return 0;
}
