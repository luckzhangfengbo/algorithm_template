/*************************************************************************
	> File Name: 浮点二分-牛顿迭代法.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 12:45:33 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

bool check(double x) {/*...*/}
double bsearch(double l, double r) {
    const double esp = 1e-6;
    while (r - l > esp) {
        double mid = (l + r) / 2;
        if (check(mid)) r = mid;
        else l = mid;
    }
    return l;
}
