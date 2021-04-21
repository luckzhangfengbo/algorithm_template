/*************************************************************************
	> File Name: SPFA.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/21 07:43:43 2021
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

struct node {
    int e, dis, next ;
};



int n , m , s, cnt, ans[10000], head[10000], que_mark[10000];
node edge[1000];
char mark[10003][10003];

int main() {
    memset(ans, 0x3F, sizeof(ans));
    memset(head, -1, sizeof(head));
    cin >> n >> m >> s;
    for (int i =1 ; i <= m; i++) {
        int a, b , c;
        cin >> a >>  b >> c;
        if (mark[a][b]) {
            int ind = head[a];
            while (edge[ind].e != b) {
                ind = edge[ind].next;
            }
            edge[ind].dis = min(c, edge[ind].dis);
        } else {
            mark[a][b] = 1;
            edge[cnt].e = b;
            edge[cnt].dis = c;
            edge[cnt].next = head[a];
            head[a] = cnt;
            cnt++;
        }
    }
    ans[s] = 0;
    queue<int> que;
    que.push(s);
    que_mark[s] = 1;
    while (!que.empty()) {
        int t  = que.front();
        que.pop();
        que_mark[t] = 0;
        for (int i = head[t]; i != -1; i = edge[i].next) {
            if (ans[edge[i].e] > ans[t] + edge[i].dis) {
                ans[edge[i].e] = ans[t] + edge[i].dis;
                if (!que_mark[edge[i].e]) {
                    que_mark[edge[i].e] = 1;
                    que.push(edge[i].e);
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " ";
        }
        if (ans[i] != 0x3f3f3f3f) {
            cout << ans[i];
        } else {
            cout << 0x7FFFFFFF;
        }
    }
    return 0;
}
