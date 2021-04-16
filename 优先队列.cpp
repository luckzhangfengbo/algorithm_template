/*************************************************************************
	> File Name: 优先队列.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  4/16 12:04:28 2021
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//
priority_queue<int, vector<int>, greater<int> > p ;//从小到大
priority_queue<int> p;//从大到小

//结构体_priority

struct Node {
    int value;
    int key;
}p[10];

struct cmp {
    bool operator()(Node a, Node b) {
        if (a.key == b.key) return a.value < b.value;
        return a.key <  b.key;
    }
};

priority_queue<Node, vector<Node>, cmp> heap;//从大到小


//实现优先队列


template< class type>
class priority_queue {
private:
    vector<type> data;
public:
    void push(type t) {
        data.push_back(t);
        push_heap(data.begin(), data.end());
    }
    void pop() {
        pop_heap(data.begin(), data.end());
        data.pop_back();
    }
    type top() {return data.front();}
    int size() {return data.size();}
    bool empty() {return data.empty();}
};
