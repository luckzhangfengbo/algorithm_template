/*************************************************************************
	> File Name: 欧几里得.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 11:16:03 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b , a % b);
}

int min_gcd(int a, int b) {
    return a * b / gcd(a, b) ;
}
int main() {
    int a, b ;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << min_gcd(a, b) << endl;
    return 0;
}
