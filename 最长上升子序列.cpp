/*************************************************************************
	> File Name: 最长上升子序列.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 二  4/20 13:00:23 2021
 ************************************************************************/


/*输入 10
*    3 2 5 7 4 5 7 9 6 8 
*输出 5   
* */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define MAX_N 20000000

int a[MAX_N + 5];
int dp[MAX_N + 5];
int len[MAX_N + 5];
int n , ans = 0;

int find(int *arr, int l, int r, int x) {
    if (l == r) return l;
    int mid = (l + r) >> 1;
    if (arr[mid] < x) return find(arr, mid + 1, r, x);
    else return find(arr, l, mid, x);
}


int main() {
    int n;
    cin >> n;
    for (int i = 1; i<= n; i++) {
        cin >> a[i];
        dp[i] = 1;
        len[i] = 0x3f3f3f3f;
    }
    len[++ans] = a[1];
    for (int i = 2; i <= n; i++) {
        dp[i] = find(len, 1, ans +1, a[i]);
        len[dp[i]] = a[i];
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}
