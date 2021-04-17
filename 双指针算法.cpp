/*************************************************************************
	> File Name: 双指针算法.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六  4/17 08:56:00 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int n;
for (int i = 0, j = 0; i < n; i++) {
    while (j < i &&check(i ,j)) j++;
    //具体逻辑
}

常见问题分类：
(1) 对于一个序列，用两个指针维护一段区间
(2)对于两个序列，维护某种次序， 比如归排序中合并两个有序序列的操作
