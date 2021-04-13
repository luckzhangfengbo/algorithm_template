/*************************************************************************
	> File Name: 阶乘.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 二  4/13 20:00:12 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int num[1000000] = {1}, len = 1;

int mult(int *num, int len, int n) {
    long long temp = 0;
    for (long long i = 0; i < len; i++) {
        temp += num[i] * n;
        num[i] = temp % 10;
        temp /= 10;
    }
    while(temp) {
        num[len++] = temp % 10;
        temp /= 10;
    }
    return len;
}


int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        len = mult(num, len, i);
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%d", num[i]);
    }
    return 0;
}
