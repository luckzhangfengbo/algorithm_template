/*************************************************************************
	> File Name: Bellman-Ford.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/21 07:06:06 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int n, m, s, dis[1000003][3], ans[10000002];


int main() {
    memset(ans, 0x3F, sizeof(ans));
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >>a >> b >> c;
        dis[i][0] = a;
        dis[i][1] = b;
        dis[i][2] = c;
    }
    ans[s] = 0;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            ans[dis[j][1]] = min(ans[dis[j][1]], ans[dis[j][0]] + dis[j][2]);
        }
    }
    for (int i  = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
