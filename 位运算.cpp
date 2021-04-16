/*************************************************************************
	> File Name: 位运算.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 13:50:27 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//求n的第k位数字： n >> k & 1
//返回n的最后一位1 : lowbit(n) = n & (-n)


#define lowbit(x) ((x) & (-x))







int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] << endl;
    }


    return 0;
}
