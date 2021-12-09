/*************************************************************************
	> File Name: 快速幂.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三  4/14 00:10:29 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int qpow(long long a, long long b) {
    long long ans = 1, base = a; 
    while (b > 0) {
        if (b & 1) {
            ans *= base;
        }
        base *= base;
        b >>= 1;
    }
    return ans;
}
// a^b % m

int qpow2(long long a, long long b, long long m) {
    long long ans = 1, base = a % m;
    while (b > 0) {
        if (b & 1) {
            ans = ans * base % m;
        }
        base = base * base % m;
        b >>= 1;
    } 
    return ans % m;
}


int main() {
    long long a, b;
    cin >> a >> b;
    long long c = qpow(a, b);
    cout << c << endl;
    return  0;
}
