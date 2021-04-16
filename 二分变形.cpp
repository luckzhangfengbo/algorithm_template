/*************************************************************************
	> File Name: 二分变形.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 12:34:31 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
bool check(int x) {return x > 7;}
//区间[l, r]被换分为[l, mid]和[mid + 1, r]时使用
//0 0 0 0 0 0 0 1 1 1  1 1 1 1 找第一个1

int binary_search_one(int l, int r) {
    while(l < r) {
        int mid = (l + r) >> 1;
        if (check(mid)) r = mid;
        else l = mid - 1;
    }
    return l;
}

//区间[l, r]被换分为[l, mid - 1]和[mid, r]时使用
//1  1 1 1 0 0 0 0 0 0 0 0 0  找最后一个1

int binary_search_two(int l,  int r) {
    while(l < r) {
        int mid = (l + r + 1) >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    return l;
}



