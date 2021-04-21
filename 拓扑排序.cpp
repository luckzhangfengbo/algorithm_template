/*************************************************************************
	> File Name: 拓扑排序.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/21 13:42:38 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

struct edge {
    int to ,next;
};

edge edg[50];
int n, m , head[50], in_degree[50];
int main() {
    memset(head, -1, sizeof(head));
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b ;
        cin >> a >> b;
        edg[i].to = b;
        edg[i].next = head[a];
        head[a] = i;
        in_degree[b]++;
    }
    queue<int> que;
    for (int i = 1; i <= n; i++) {
        if (in_degree[i] == 0) {
            que.push(i);
        }
    }
    while (!que.empty()) {
        int temp = que.front();
        que.pop();
        cout << temp << " ";
        for (int i = head[temp]; i != -1; i = edg[i].next) {
            int e = edg[i].to;
            in_degree[e]--;
            if (in_degree[e] == 0) {
                que.push(e);
            }
        }
    }

    return 0;
}
