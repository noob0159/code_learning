#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <list>

using namespace std;
/*
链表
优点：有点快速删除元素和插入元素
缺点：数据遍历速度慢，而且占用空间大
STL中是一个双向链表，而且链表有哨兵节点
常见的函数调用：
push_back()
pop_back()
push_front()
pop_front()
insert(pos,elem)
clear()
erase(pos) or (begin, end)删除元素
remove(elem)              删除匹配elem元素
front()
back()
顺序迭代器
reverse()
sort()
*/
template<class T>

void printlist(const list<T>& l){
    cout<<l.size()<<endl;
    for (class list<T>::iterator it = l.begin(); it != l.end(); it++){
        (*it)->printperson();
    }
    cout<<endl;
}

class person{
    public:
        person(string name,int age, int height){
            this->m_age = age;
            this->m_name = name;
            this->m_height = height;
        }
        void printperson();
        int show_age(){
            return m_age;
        }
        int show_height(){
            return m_height;
        }
    private:
        string m_name;
        int m_age;
        int m_height;      
        
};

void person::printperson(){
    cout<<"姓名："<<m_name<<"  年龄："<<m_age<<" 身高："<<m_height<<endl;
}

bool compareperson(person& p1, person& p2){
    if (p1.show_age() == p2.show_age()) {
        return p1.show_height()>p2.show_height();
    }
    return p1.show_age() > p2.show_age();
}

int main(){

    #if 0
    list<int> l1;
    for (int i = 1; i < 10; i++){
        l1.push_back(i);
    }
    l1.push_front(100);
    l1.reverse();
    printlist(l1);
    l1.sort();
    //如果要实现类的比较，可以传入仿函数进行比较
    printlist(l1);
    #endif

    #if 1
    person p[5]{
                person("孙悟空",1000,180),
                person("猪八戒",800,159),
                person("沙僧",500,169),
                person("唐僧",34,183),
                person("龙王",1000,300)
               };
    list<person> l1;
    for (int i=0;i<5;i++){
        l1.push_back(p[i]);
    }
    for (list<person>::iterator it = l1.begin();it != l1.end(); it++){
        (*it).printperson();
    }
    l1.sort(compareperson);
    cout<<"排序后：------------------"<<endl;
    for (list<person>::iterator it = l1.begin();it != l1.end(); it++){
        (*it).printperson();
    }
    #endif

    system("pause");
    return 0;
}