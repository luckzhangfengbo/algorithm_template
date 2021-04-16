/*************************************************************************
	> File Name: 拓展欧几里得.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 11:19:10 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int ex_gcd(int a, int b, int *x, int *y) {
    if (!b)  {
        *x = 1, *y = 0;
        return 0;
    }
    int ret = ex_gcd(b, a % b, y, x);
    *y -= a / b * (*x);
    return ret;
}
int main() {
    int a, b , x, y;
    while (~scanf("%d%d", &a, &b)) {
        printf("gcd(%d, %d) = %d\n", a, b , ex_gcd(a, b , &x, &y));
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, a * x + b * y);
    }
    return 0;
}
