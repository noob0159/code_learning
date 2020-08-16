#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

/*
类模板与其继承，子类继承类模板必须做到以下条件：
1.子类在继承父类模板时，必须声明父类中模板的类型；
2.如果不指定，子类无法获得内存分布；
3.如果想要灵活指出父类中T的类型，那么子类也必须变成模板

*/
template <class T>
class father{
    public:
        T m_val;
        father();
    friend void printF(father<T> p){
        cout<<"类内实现全局函数！"<<endl;
    }
};

//在类外实现模板父类的构造函数也需要使用模板申明和类型填充
//值得注意的是，这些文件最好在头文件和主程序中分开编写
template<class T>
father<T>::father(){
    cout<<"father的构造函数"<<endl;
}

class son:public father<int>{
    public:
    son(int val){
        this->m_val = val;
    }
    void print();
};
void son::print(){
    cout<<m_val<<endl;
}


int main(){

    #if 1
    son *c1 = new son(10);
    c1->print();
    delete c1;
    //类内实现全局函数
    father<int> f1;
    printF(f1);
    #endif

    system("pause");
    return 0;
}