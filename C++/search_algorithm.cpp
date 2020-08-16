#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

/*
常用查找算法：
返回的是一个迭代器
如果是自定义的数据类型，记得注意要重载==号作为判定条件
find(v.begin(),v.end(),condition)
find_if(v.begin())
binary_search(v.begin(),v.end(),value);
count(v.begin(),v.end(),value);
count_if(v.begin(),v.end(),value);

*/
class person{
    public:
        person(const string name, const int age){
            this->m_age = age;
            this->m_name = name;
        }
        int m_age;
        string m_name;
        bool operator== (const person &p){
            if (this->m_age == p.m_age && this->m_name == p.m_name){
                return true;
            }
            else{
                return false;
            }
        }        
};
int main(){
    person p[4] = {
                   person("刘备",18),
                   person("关羽",17),
                   person("张飞",16),
                   person("赵云",15)
                   };
    vector<person> v1;
    for (int i = 0; i<4; i++){
        v1.push_back(p[i]);
    }
    vector<person>::iterator it = find(v1.begin(),v1.end(),p[2]);
    cout<<(*it).m_name<<endl;
    cout<<(*it).m_age<<endl;   
    system("pause");
    return 0;
}