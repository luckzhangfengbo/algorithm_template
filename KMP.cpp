/*************************************************************************
	> File Name: KMP.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一  4/19 12:01:43 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//s[]是长文本, p[]是模式串， n是s的长度, m是p的长度
//求模式串中的Next数组

for (int i = 2, j = 0; i <= m; i++) {
    while (j && p[i]) != p[j + 1] j = ne[j];
    if (p[i] == p[j + 1]) j++;
    ne[i] = j;
}



//匹配

for (int i = 1, j = 0; i <= n; i++) {
    while (j && s[i] != p[j + 1]) j = ne[j];
    if (j == m) {
        j = ne[j];
        //匹配成功后的逻辑
    }
}


int main() {
    
    return 0;
}
