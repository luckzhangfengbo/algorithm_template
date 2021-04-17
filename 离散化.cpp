/*************************************************************************
	> File Name: 离散化.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六  4/17 09:00:31 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
vector<int> alls;
sort(alls.begin(), alls.end());
alls.erase(unique(alls.begin(), alls.end()), alls.end());//去除重复元素


//二分求出x对应的离散化的值

int find(int x) {
    int l = 0, r = alls.size() - 1;
    while (l < r) {
        int mid = (l + r) >> 1;
        if (alls(mid) >= x) r = mid;
        else l = mid + 1;
    }
    return r + 1;
}
