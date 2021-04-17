/*************************************************************************
	> File Name: 单调队列.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六  4/17 23:54:50 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//常见模型，找出滑动窗口中的最大值/最小值
//int hh = 0, tt = -1;
//for (int i = 0; i< n ; i++) {
//    while (hh <= tt && check_out(q[hh])) hh++; //判断队列是否滑动窗口
//    while (hh <- tt && check(q[tt], 1)() tt--;
//    q[++t] = i;
//}

const int N = 1000;

int a[N], q[N];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i =0 ; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int hh = 0, tt = -1;
    for (int i = 0; i< n; i++) {
        if (hh <= tt && i - k + 1 >= q[hh]) hh++;
        while (hh <= tt && a[q[tt]] >= a[i]) tt--;
        q[++tt] = i;
        if (i >= k - 1) printf("%d", a[q[hh]]);;
    }
    puts("");
    hh = 0, tt = -1;
    for (int i = 0; i < n; i++) {
        if (hh <= tt && i - k + 1 > q[hh])hh++;
        while (hh <= tt && a[q[tt]] <+ a[i]) tt--;
        q[++tt] = i;
        if(i >= k - 1) printf("%d", a[q[hh]]);
    }
    puts(" ");
    return 0;
}
