#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class printvector{
    public:
        void operator()(int val){
            cout<<val<<" ";
        }
};

/*
常见的排序算法：
sort(v.begin(),v.end(),_verb)       排序     
random_shuffle(v.begin(),v.end())   打乱数组顺序
merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin())     合并数据，两个容器必须有序！！
reverse(v1.begin(),v1.end())                           数组反向

*/

int main(){
    vector<int> v1,v2,v;
    for (int i=0; i<10; i++){
        v1.push_back(i);
        v2.push_back(i+2);
    }
    v.resize(v1.size()+v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
    for_each(v.begin(),v.end(),printvector());
    system("pause");
    return 0;
}