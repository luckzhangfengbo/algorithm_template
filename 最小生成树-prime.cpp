/*************************************************************************
	> File Name: 最小生成树-prime.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/21 13:26:32 2021
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
    int to, next , val;
};

struct node {
    int now, val;
    bool operator<(const node & b) const {
        return this->val > b.val;
    }
};


edge edg[400005];
int n , m, edg_cnt, head[100002], ans, already, visit[10002], dis[10002];

void add_edg (int a, int b, int c) {
    edg[edg_cnt].to = b;
    edg[edg_cnt].val = c;
    edg[edg_cnt].next = head[a];
    head[a] = edg_cnt++;
}


int main() {
    memset(head, - 1, sizeof(head));
    memset(dis, 0x3F, sizeof(dis));
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b , c;
        cin >> a >> b >> c;
        add_edg(a, b , c);
        add_edg(b, a , c);
    }
    priority_queue<node> que;
    que.push((node) {1, 0});
    while (!que.empty()) {
        node temp = que.top();
        que.pop();
        if (visit[temp.now] == 1) {
            continue;
        }
        visit[temp.now] = 1 ;
        ans += temp.val;
        already++;
        if (already == n) break;

        for (int i = head[temp.now]; i != -1; i = edg[i].next) {
            if (visit[edg[i].to] == 0 && dis[edg[i].to] > edg[i].val) {
                dis[edg[i].to] = edg[i].val;
                que.push((node) {edg[i].to, edg[i].val});
            }
        }
    }

    if (already == n) {
        cout << ans << endl;
    } else {
        cout << "arz" << endl;
    }
    return 0;
}
