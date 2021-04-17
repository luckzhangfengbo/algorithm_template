/*************************************************************************
	> File Name: 区间合并.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 六  4/17 23:17:18 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

typedef pair<int, int> PII;
const int N = 1e5 + 7;
vector<PII> segs;
//将所有存在交集的区间合并

void merge(vector<PII>& segs) {
    vector<PII> res;

    sort(segs.begin(), segs.end());

    int st = -2e9, ed = -2e9;
    for (auto seg: segs) {
        if (ed < seg.first) {
            if (st != -2e9) res.push_back({st, ed});
            st = seg.first, ed = seg.second;
        } else  ed = max(ed, seg.second);
        if (st != -2e9) res.push_back({st, ed});
        segs = res;
    }
}

