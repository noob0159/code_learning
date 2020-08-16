#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

/*
常用接口：
push()  压入栈顶元素
pop()   移除栈顶元素
top()   返回栈顶元素
empty() 返回栈是否为空
size()  返回栈的大小
*/

void printstack(stack<int>& s){
    cout<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";        
        s.pop();
    }
    cout<<endl;
}

int main(){

    stack<int> s1;
    for (int i = 1; i < 10; i++){
        s1.push(i);
    }
    printstack(s1);

    system("pause");
    return 0;
}