#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
//仿函数
//带bool的仿函数也可以看成是谓词
class greaterthanfive{
    public:
        bool operator()(int val){
            return val > 5;
        }
};


int main(){
    vector<int> v1;
    for (int i=0; i<5; i++){
        v1.push_back(i);
    }
    //通过谓词找到了大于5的第一个元素
    vector<int>::iterator it = find_if(v1.begin(),v1.end(),greaterthanfive());
    if (it != v1.end()){
        cout<<*it<<endl;
    }
    else{
        cout<<"没有元素比5大"<<endl;
    }
    system("pause");
    return 0;
}