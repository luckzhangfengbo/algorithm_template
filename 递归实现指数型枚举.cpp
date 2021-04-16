/*************************************************************************
	> File Name: 递归实现指数型枚举.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 12:21:32 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//递归的去实现


int num[15], cnt, n ;
void p() {
    for (int i = 0; i < cnt; i++) {
        if (i) cout << " ";
        cout << num[i];
    }
    cout << endl;
}


void func(int s) {
    for (int  i = s; i <= n; i++) {
        num[cnt++] =i;
        p();
        func(i + 1);
        cnt--;
    }
}


int main() {
    cin >> n;
    func(1);
    return 0;
}
