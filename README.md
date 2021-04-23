# algorithm_template
打比赛模版自己整理

## C++-STL

```c++
vector, 变长数组， 倍增的思想
size() 返回元素的个数
empty() 返回是否为空
clear() 清空
front()/back() 
push_back()/pop_back()
begin()/end()
[]支持比较运算，按字典序
  
  
  
 pair<int, int> 
  first 第一个元素
  second, 第二个元素
  支持比较运算， 以first为第一关键字， 以second为第二个关键字
  
  
  
 string  字符串
  size()/length() 返回字符串长度
  empty()
  clear()
  substr(起始下标，（子串长度）) 返回子串
  c_str() 返回字符串所在字符数组的起始地址
  
  
  
  
  queue, 队列
  size() 
  empty()
  push() 向对尾插入一个元素
  front()返回队头元素
  back() 返回队尾元素
  pop() 弹出队头元素
  
  
  priority_queue, 优先队列， 默认是大根堆
  size()
  push()
  front()
  back()
  pop()
  
  stack ，栈
  size()
  empty()
  push()
  front()
  top()
  pop()
  
  deque,  双端队列
  size()
  empty()
  clear()
  front()/back()
  push_back()/pop_back()
  push_front()/pop_front()
  begin()/end()
  []
  
  
  set, map, multiset, mutimap, 基于平衡二叉树（红黑树）， 动态维护有序序列
  size()
  empty()
  clear()
  begin()
  ++, -- 返回前缀和后缀， 时间复杂度（O(logn)）
  set/multiset 
  insert()
  find()
  count()
  erase()
  	(1)输入时一个数x，删除所有x （O(k + logn)）
  	(2)输入一个迭代器， 删除这个迭代器
  lower_bound()/ upper_bound()
  	lower_bound(x) 返回大于等于x的最小的数的迭代器
  	upper_bound(x) 返回大于x的最小的数的迭代器
  
  map/multimap
    insert() 插入的数是一个pair
  	erase() 输入的参数是pair或者迭代器
  	fond()
  	[]注意multimap不支持此操作
  	lower_bound()/ upper_bound()
  	
  
  
  
  
  unordered_set, unordered_map, unordered_multiset,  unordered_multimap  哈希表
  
 和上面类似， 增删改查的时间复杂度 O(1)
  不支持 lower_bound()/upper_bound() 迭代器的 ++， --
  
  
  
  
  bitset， 压位
  bitset<1000> S;
	~, &, | * 
  >>, << 
  ==, != 
  []
    count()返回有多少个1
    any() 判断是否至少有一个1
    none() 判断是否全为0
    
    
    set() 把所有位置成1
    set(k, v) 将第k位置成v
    reset() 把所有位变成0
    flip() 等价于 ~
    flip() 把第k位取反
    
    
  
  
  
```





