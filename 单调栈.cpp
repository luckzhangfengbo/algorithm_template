/*************************************************************************
	> File Name: 单调栈.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六  4/17 23:50:16 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
//常见模型， 找出每个数左边离它最近比它大/小的数
//int tt = 1;
//for (inti  = 1; i <= n; i++) {
//    while (tt && check(stk[tt], i)) tt--;
//    stk[++tt] = i;
//}


const int N = 1e5 + 7;
int stk[N], hh , tt;

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a;
        scanf("%d", &a);
        while (tt != 0 && stk[tt] >= a) tt--;
        if (tt != 0) printf("%d", stk[tt]);
        else printf("-1 ");
        stk[++tt] = 0;
    }
    return 0;
}
