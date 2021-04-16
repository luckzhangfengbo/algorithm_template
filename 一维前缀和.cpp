/*************************************************************************
	> File Name: 一维前缀和.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 13:12:27 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//S[i] = a[1] + a[2] + ..... a[i];
//a[l] + ..... + a[r] = S[r] - S[l- 1]


const int N = 100001;

int q[N],s[N];


int main() {
    int n , m ;
    int l , r;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> q[i];
        s[i] = s[i - 1] + q[i];
    }
    while (m--){
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}
