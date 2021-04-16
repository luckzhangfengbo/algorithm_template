/*************************************************************************
	> File Name: 一个整数因子的和.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 13:08:24 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;



#define max_n 10000


int prime[max_n + 5] = {0};
int f[max_n + 5] ={0};
int cnt[max_n  +5] = {0};


void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            cnt[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                f[i * prime[j]] = f[i] / (pow(prime[j], cnt[i] + 1) - 1) *
                (pow(prime[j], cnt[i] + 2) - 1);
                cnt[i * prime[j]] = cnt[i] + 1;
            }else {
                f[i * prime[j]] = f[i] * f[prime[j]];
                cnt[i * prime[j]] = 1;
            }
        }
    }
    return ;
}



int main() {
    int  n ;
    init();
    while (cin >> n) {
        cout << n << "的因子和" << f[n] <<endl;
    }

    return 0;
}
