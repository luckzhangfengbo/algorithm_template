/*************************************************************************
	> File Name: 二维差分.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 13:39:48 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//给以(x1, y1)为左上角，(x2, y2)为右下角的子矩阵中的所有元素加上c
//S[x1, y1] += c
//S[x2 + 1, y1] -= c
//S[x1, y2 + 1] -= c
//S[x2 + 1, y1 + 1] += c
//矩阵差分模版题，先矩阵后差分， 最后进行前缀和的计算，得到原矩阵值

const int MAX_N = 1e3+5;
int a[MAX_N + 5][MAX_N + 5];
int s[MAX_N + 5][MAX_N + 5];

void insert(int x1, int y1, int x2, int y2, int v) {
    a[x1][y1] += v;
    a[x2 + 1][y1] -= v;
    a[x1][y2 + 1] -= v;
    a[x2 + 1][y2 + 1] += v;
}

int main() {
    int n,  m, q;
    cin >> n >> m >>q;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)  {
            int t;
            cin >> t;
            insert(i, j, i, j , t);
        }
    }
    while (q--) {
        int x1, y1, x2, y2, t;
        cin >> x1 >> y1 >> x2 >> y2 >> t;
        insert(x1, y1, x2, y2, t);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            a[i][j] = a[i - 1][j] + s[i - 1][j] - s[i - 1][j - 1] + a[i][j];
            cout << s[i][j];
            if (j != m) {
                cout << " ";
            }
            if (i != n) {
                cout << endl;
            }
        }
    }
    return 0;
}
