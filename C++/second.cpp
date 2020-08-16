#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

/*
普通函数和函数模板的调用规则：
1.如果函数模板和普通函数都能实现，优先调用普通函数；
2.可以通过空模板的参数列表来强制调用函数模板；
3.函数模板也可以发生重载；
4.如果函数模板可以产生更好的匹配，优先调用函数模板；
*/

void test_01(int a){
    cout<<"这是普通函数"<<endl;
}

template <class T>
void test_01(T a){
    cout<<"这是模板"<<endl;
}

//定义多个类型的函数模板
template <class TypeA, class TypeB, class Typeres>
Typeres addcal(TypeA a, TypeB b){
    return a+b;
}
/*
和上面的例子类似，可以使用以上的多个函数类型定义类模板
类模板和函数模板的区别：
1.类模板可以有默认参数
2.类模板必须显示指定数据类型。

类模板中的成员函数和普通类中成员函数的区别：
1.普通类中成员函数在编译时就创建好了地址；
2.类模板中成员函数在运行时才创建好空间；

类模板做函数参数传入：
1.指定传入的类型；
2.参数模板化；
3.整个类模板化。
*/
template <class T1, class T2>
class person{
    public:
        T1 m_name;
        T2 m_age;
        person(T1 name, T2 age){
            this->m_age = age;
            this->m_name = name;
        }
        void showperson(){
            cout<<"姓名："<<m_name<<endl;
            cout<<"年龄："<<m_age<<endl;
        }
};
//传入指定类型,最常用
void printperson1(){
    person<string,int> p1("孙悟空",1000);
    p1.showperson();
}
//参数模板化
template <class T1, class T2>
void printperson2(person<T1,T2> &p){
    p.showperson();
}
//整个类模板化,但是不推荐
template <class T>
void printperson3(T &p){
    p.showperson();
    cout<<"p的数据类型:  "<<typeid(p).name()<<endl;
}

int main(){

    #if 0
    int a = 10;
    //优先调用普通函数
    test_01(a);
    //输入参数列表强行调用模板
    test_01<>(a);
    //如果输入参数可以在模板中产生更好的匹配，那么就可以优先使用模板
    string ch = "China";
    test_01(ch);
    double b = 1.3;
    cout<<addcal<int,double,double>(a,b)<<endl;
    #endif

    #if 1
    printperson1();
    person<string, int> p2("猪八戒",99);
    person<string, int> p3("唐僧",29);
    printperson2(p2);
    printperson3(p3);
    #endif

    system("pause");
    return 0;
}