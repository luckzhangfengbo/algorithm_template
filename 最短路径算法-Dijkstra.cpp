/*************************************************************************
	> File Name: 最短路径算法-Dijkstra.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/21 06:17:20 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;


struct node {
    int now, dist;
    bool operator<(const node &b) const {
        return this->dist > b.dist;
    }
};
int n, m ,s, dis[10000][10000], ans[1000];


int main() {
    memset(ans, 0x3F, sizeof(ans));
    memset(dis, 0x3F, sizeof(dis));
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        dis[a][b] = min(dis[a][b], c);

    }
    priority_queue<node> que;
    que.push({s, 0});
    while  (!que.empty()) {
        node t = que.top();
        que.pop();
        if (ans[t.now] != 0x3F3F3F3F) continue;
        ans[t.now] = t.dist;
        for (int i = 1; i <= n; i++) {
            if(dis[t.now][i] != 0x3F3F3F3F && ans[i] == 0x3F3F3F3F) {
                que.push({i, t.dist + dis[t.now][i]});
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        if (ans[i] != 0x7FFFFFFF) {
            cout << ans[i];
        } else {
            cout << "0x7FFFFFFF" ;
        }
    }
    return 0;
}
