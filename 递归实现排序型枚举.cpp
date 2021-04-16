/*************************************************************************
	> File Name: 递归实现排序型枚举.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 12:27:19 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int n, num[15], cnt, vis[15];


void func(int left) {
    if (left == n) {
        for (int i = 0; i < cnt; i++) {
            i && cout << " ";
            cout << num[i];
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            vis[i] = 1;
            num[cnt++] = i;
            func(left + 1);
            cnt--;
            vis[i] = 0;
        }
    }
}


int main() {
    cin >> n;
    func(0);
    return 0;
}
