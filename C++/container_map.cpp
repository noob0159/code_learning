#include <map> 
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

/*
map容器中每一个元素都是pair队组
队组中第一个元素为key，第二个为value
map中不存在重复的key
multimap中可以存在重复的key
常见函数：
size()
empty()
swap()
insert()
erase()
clear()
find()
counter()
*/
template<class T>
void printmap(const map<T,T>& m){
    cout<<m.size()<<endl;
    for (typename map<T,T>::const_iterator m_Iter = m.begin(); m_Iter != m.end(); m_Iter++ ){
        cout << m_Iter->first << " " << m_Iter->second << endl;
    }
}

int main( ){
    map <int, int> m1;
    map <int, int>::iterator m1_Iter;
    //队组中第一个元素为first，第二个为second
    m1.insert(make_pair(1, 20));
    m1.insert(make_pair(4, 40));
    m1.insert(make_pair(3, 60));
    m1.insert(make_pair(2, 50));
    m1.insert(make_pair(6, 40));
    m1.insert(make_pair(7, 30));
    cout << "The original map m1 is:"<<endl;
    printmap(m1);
    system("pause");
    return 0;
}