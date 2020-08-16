#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

/*
vector 基本概念是一个单端数组
vector 和普通数组不同之处在于它可以动态扩展，和python中的list一样
如果现有内存不够就会申请一块相同大小的内存进行备用

vector 迭代器可以随机访问迭代
vector 的构造函数
vector<T> v;
vector(v.begin(), v.end());
vector(n, nelem);

*/

void printvector(vector<int>& v){
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<< *it<<"  ";
    }
    cout<<endl;
}

int main(){

    vector<int> v1;
    for (int i=0;i<10;i++){
        v1.push_back(i);
    }
    printvector(v1);
    vector<int> v2(10, 100);
    printvector(v2);
    
    /*
    容量和大小：
    1.empty()       判断容器是否为空
    2.capacity()    判断容器的容量
    3.size()        得到容器内元素个数
    4.resize(int num, nelement)      重新指定容器的长度，变长则默认填充。变短就删除多余元素
    */
    cout<<v1.size()<<endl;
    cout<<v1.empty()<<endl;

    /*
    插入和删除：
    push_back();        压入
    pop_back();         弹出
    insert(pos, elem);  插入
    erase(pos, elem);   檫除
    clear();            清空元素
    */

    /*
    索引和查找
    at(int idx);    返回索引idx所在的数据
    vector[];     同上
    front();        返回容器中第一个数据元素
    back();         返回容器中最后一个元素
    */

    /*
    容器呼唤
    swap(vector<T> v1)
    */
    cout<<"互换前："<<endl;
    printvector(v1);
    printvector(v2);
    v1.swap(v2);
    cout<<"互换后："<<endl;
    printvector(v1);
    printvector(v2);
    //巧用swap函数收缩内存空间
    vector<int>(v1).swap(v1);

    //利用reserve一次性开辟需要的空间数量
    vector<int> v3;
    v3.reserve(1000);
    cout<<v3.capacity()<<endl;
    system("pause");
    return 0;
}