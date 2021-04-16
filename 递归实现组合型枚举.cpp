/*************************************************************************
	> File Name: 递归实现组合型枚举.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 12:25:11 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int n, m ,cnt, ans[20];


void dfs(int s) {
    if (cnt == m) {
        for (int i = 0; i < cnt; i++) {
            i && cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }
    for (int i = s; i <= n; i++) {
        ans[cnt++] = i;
        dfs(i + 1);
        cnt--;
    }
}

int main() {
    cin >> n>> m;
    dfs(1);
    return 0;
}
