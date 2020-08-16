#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class printvector{
    public:
        void operator()(const int val){
            cout<<val<<" ";
        }
};
class Transform{
    public:
        int operator()(const int val){
            return val+10;
        }
};
/*
常见的遍历算法：
for_each(v.begin(),v.end(),myfun());
transform(v1.begin(),v1.end(),v2.begin(),my_func());

*/

int main(){
    vector<int> v1;
    for (int i=0; i<10; i++){
        v1.push_back(i);
    }
    for_each(v1.begin(),v1.end(),printvector());
    cout<<endl;
    vector<int> v2;
    v2.resize(v1.size());
    transform(v1.begin(),v1.end(),v2.begin(),Transform());
    for_each(v2.begin(),v2.end(),printvector());
    cout<<endl;
    system("pause");
    return 0;
}