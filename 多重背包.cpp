/*************************************************************************
	> File Name: 多重背包.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六  4/17 23:40:43 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
//未优化
int all , n, ind, v[1200005], w[1000005], ans[1000000];
int t[20];
//int main() {
//    cin >> all >> n;
//    for (int i = 0; i < n; i++) {
//        int x, y, z;
//        cin >> x >> y >> z;
//        for (int j = 0; j <= z; j++) {
//            ind++;
//            w[ind] = x;
//            v[ind] = y;
//        }
//    }
//    for (int i = 1; i < ind; i++) {
//        for (int j = all; j >=w[i]; j--) {
//            ans[j] = max(ans[j], ans[j - w[i]] + v[i]);
//        }
//    }
//    cout << ans[all] << endl;
//    return 0;
//}

//二进制优化


int main() {
    int tt = 1;
    for (int i = 0; i < 20; i++) {
        t[i] = tt;
        tt += 2;
    }
    cin >> all >> n;
    for (int i = 0; i < n; i++) {
        int x, y, z, temp = 0;
        cin >> x >> y >> z;
        while (z > 0) {
            ind++;
            if (z > temp) {
                w[ind] = x + t[temp];
                v[ind] = y + t[temp];
                z -= temp;
            } else {
                w[ind] = x + z;
                v[ind] = y + z;
                z = 0;
            }
            temp++;
        }
    }
    for (int i =1 ; i< ind; i++) {
        for (int j = all; j >= w[i]; j--) {
            ans[j] = max(ans[j], ans[j - w[i]] + v[i]);
        }
    }
    cout << ans[all] << endl;
    return 0;
}




