#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

/*
常用接口：
push()  压入队列尾元素
pop()   移除队列顶元素
front() 返回队列顶元素
back()  返回队列尾元素
empty() 返回队列是否为空
size()  返回队列的大小
和栈一样不允许迭代
*/

void printqueue(queue<int>& q){
    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";        
        q.pop();
    }
    cout<<endl;
}

int main(){

    queue<int> q1;
    for (int i = 1; i < 10; i++){
        q1.push(i);
    }
    printqueue(q1);

    system("pause");
    return 0;
}