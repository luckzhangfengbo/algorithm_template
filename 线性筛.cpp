/*************************************************************************
	> File Name: 线性筛.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 12:49:08 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

const int N = 1e6 + 7;
int prime[N];
void is_prime() {
    for (int i = 2; i <= N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if ( i * prime[j] > N) break;
            prime[i * prime[j]]  = 1;
            if (i % prime[j] == 0) break;
        }
    }
}
