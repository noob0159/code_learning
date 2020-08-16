#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <deque>

using namespace std;

/*
deque 是两端数组，减小了头部插入数据的复杂度；
常见函数：
.push_front()
.push_back()
.pop_front()
.pop_back()
.insert()
.begin()
.end()
.size()
.empty()
.resize()
.insert()
.erase()
[]
.front()
.back()
除了迭代器和头插入文件，其他的和vector一样
内部工作原理：
内部有个中控器，维护每段缓冲的内容，缓冲区存放真是数据
中控器维护的是每个缓冲区的地址，使得每一个deque像是一个连续的内存空间

*/
void printdeque(deque<int>& d){
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){

    deque<int> d1;
    for (int i = 10; i > 0; i--){
        d1.push_back(i);
    }
    printdeque(d1);
    sort(d1.begin(),d1.end());
    //排序也可以对vector进行，同理的排序会直接修改数据
    printdeque(d1);
    system("pause");
    return 0;
}