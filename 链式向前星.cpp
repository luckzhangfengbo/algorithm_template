/*************************************************************************
	> File Name: 链式向前星.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/21 06:45:22 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

#define MAX_N 1000010

struct NODE {
    int w;
    int to;
    int next;
} edge[MAX_N];
int cnt = 1;
int head[MAX_N];

void add (int a, int b, int c) {
    edge[cnt].w = a;
    edge[cnt].to = b;
    edge[cnt].next = head[a];
    head[a] = cnt++;

}
int main() {
    memset(head, - 1, sizeof(head));
    cnt = 1;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int a,b , c;
        cin >> a >> b >>c;
        add (a, b , c);
    }
    for (int  i = 1; i <= n; i++) {
        for (int j = head[i]; j; j = edge[j].next) {
            cout << i << "->" << edge[j].to << " " << edge[j].w ;
            cout << endl;
        }
    }


    return 0;
}
