/*************************************************************************
	> File Name: 并查集.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六  4/17 23:28:54 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int f[10000];
int find(int k) {
    if (f[k] == k) return k;
    return f[k] == find(f[k]);
}
void join(int x, int y) {
    int fx = find(x);
    int fy = find(y);
    f[fx] = fy;
}
for (itn i = 1; i <= 100; i++) {
    f[i] = i;
}//切记f数组一定初始化为自己为自己父亲
