#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

/*
set集合，不会有重复元素
multiset集合，允许有重复元素出现

集合的构造基本和其他容易一样，基本上就是= 和assign函数
集合默认升序排列，如果想要降序排列，需要写一个仿函数
常见的集合函数：
insert()
clear()
erase()
size()
empty()
swap(set)
---------
find(key)   查找元素是否存在
count(key)  统计key的个数
---------
在定义set的时候，使用greater<>重载符，可以直接倒序排列
set<>的定义了类型中可以存放自定义的类，
！！！！！！！！！！！！！！！！但是必须指定排序规则
*/
#if 1
template<class T>
void printset(set<T,greater<T>>& s){

    cout<<s.size()<<endl;
    for (typename set<T,greater<T>>::iterator it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
#endif

#if 0
template<class T>
void printset(set<T>& s){
    cout<<s.size()<<endl;
    for (typename set<T>::iterator it = s.begin(); it != s.end(); it++ ){
        cout<<(*it).show_name()<<" "<<(*it).show_age()<<endl;
    }
}
#endif

class person{
    public:
        person(const string name, const int age){
            this->m_name = name;
            this->m_age = age;
        }
        string show_name(){
            return m_name;
        }
        int show_age(){
            return m_age;
        }
        // const bool operator<(person& p1){
        //     return this->m_age < p1.m_age;
        // }
    private:
        string m_name;
        int m_age;
};

int main(){

    #if 1
    set<int,greater<int>> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(30);
    printset(s1);
    set<int>::iterator pos = s1.find(20);
    string bl = pos!=s1.end()? "EXIST":"NOT EXIST";
    cout<<bl<<endl;
    cout<<s1.count(30)<<endl;
    #endif
    person p1("唐僧",100);
    cout<<sizeof(p1)<<endl;
    #if 0
    set<person> s2;
    person p[5]{
                person("孙悟空",1000),
                person("猪八戒",800),
                person("沙僧",500),
                person("唐僧",34),
                person("龙王",1000)
               };
    for (int i=0;i<5;i++){
        s2.insert(p[i]);
    }
    printset(s2);
    #endif

    system("pause");
    return 0;
}