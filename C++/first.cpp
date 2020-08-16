#include <iostream>
#include <string>

using namespace std;

/*
模板的使用是C++做为泛型编程的一种象征
使用模板应当注意以下几点：
1.必须声明数据类型T
2.数据类型T必须数据类型相同

普通函数和函数模板的调用规则：
1.如果函数模板和普通函数都能实现，优先调用普通函数；
2.可以通过空模板的参数列表来强制调用函数模板；
3.函数模板也可以发生重载；
4.如果函数模板可以产生更好的匹配，优先调用函数模板；


*/

#if 0
//数据类型写法
template <typename T>
void Myswap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
#endif

//类写法，更加适用于泛型编程
template <class T>
void Myswap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
int main(){

    int a = 10;
    int b = 20;
    //使用时最好是显式数据类型
    Myswap<int>(a, b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;


    system("pause");
    return 0;
}