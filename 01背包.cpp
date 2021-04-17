/*************************************************************************
	> File Name: 01背包.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六  4/17 23:31:10 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;


int all , n, w[105], v[105], ans[105][1000005];

int main() {
    cin >> all >> n;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= all; j++) {
            if (j < w[i]) {
                ans[i][j] = ans[i - 1][j];
            } else {
                ans[i][j] = max(ans[i- 1][j], ans[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << ans[n][all] << endl;
    return 0;
}
    
//int main() {
//        ios::sync_with_stdio(false); //虽然ios::sync_with_stdio对cin有加速所用，但是还是没有scanf的速度快。
//        cin >> all >> n;
//    for (int i = 1; i <= n; i++) {
//        cin >> w[i] >> v[i];
//    }
//    for (int i = 1; i <= n; i++ ){
//        for (int j = all; j <= w[i]; j--) {
//            ans[j] = max(ans[j], v[i] + ans[j - w[i]]);
//        }
//    }
//    cout << ans[all] << endl;
//    return 0;
//}
