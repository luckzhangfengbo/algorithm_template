/*************************************************************************
	> File Name: 最小生成树.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/21 13:17:42 2021
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
    int from, to, val;
};

bool cmp (edge a, edge b) {
    return a.val > b.val;
}


edge edg[200005];

int n, m , ans, my_union[50005], already = 1;

int find_root(int x) {
    if (my_union[x] != x) {
        return my_union[x] = find_root(my_union[x]);
    }
    return x;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> edg[i].from >> edg[i].to >> edg[i].val;
    }
    for (int i = 1; i <= n; i++) {
        my_union[i] = i;
    }
    sort(edg, edg + m, cmp);
    for (int i = 0; i < m; i++) {
        int aroot = find_root(edg[i].from), broot = find_root(edg[i].to);
        if (aroot != broot) {
            already++;
            ans += edg[i].val;
            my_union[aroot] = broot;
            if (already == n) {
                break;
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
