/*************************************************************************
	> File Name: 全排列.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 12:15:20 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int n , num[15], cnt, vis[15];
//用stl
/*int main() {
    int ans[4] = {1, 2, 3, 4};
    sort(aans, ans + 4);
    do {
        for (int i = 0; i < 4; i++) {
            cout << ans[i] << " ";
        }
    } while(next_permutation(ans, ans + 4));

    return 0;
}
*/
//不用stl


void func(int s) {
    if (s == n)  {
        for (int i = 0; i < cnt; i++) {
            i && cout << " ";
            cout << num[i];
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            vis[i] = 1;
            num[cnt++] = i;
            func(s + 1);
            cnt--;
            vis[i] = 0;
        }
    }
}


int main() {
    cin >> n;
    func(0);
    return 0;
}
