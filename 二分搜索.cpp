/*************************************************************************
	> File Name: 二分搜索.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 12:31:14 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;


const int N = 1e6  + 7;
int a[N];
int x, n;

int binary_search(int *a, int l , int r) {
    while(l <= r){
        int mid = (l + r) >> 1;
        if (a[mid] == x) {
            return mid;
        } else if (a[mid] > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cout << binary_search(a, 0 , n - 1) << endl;
    }

    return 0;
}
