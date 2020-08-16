#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
//内建仿函数的头文件
#include <functional>

/*
算术仿函数：
plus
minus
multiplies
divides
modulus
negate
*/
/*
关系运算符：
equal
not_equal
greater
greater_equal
less
less_equal
可以直接作为匿名函数传入容器中
*/
/*
逻辑仿函数：
logical_and
logical_or
logical_not
*/
using namespace std;

int main(){
    //尝试了不能用double
    negate<float> n;
    cout<<n(1.2)<<endl;
    minus<float> p;
    cout<<p(1.2,1.3)<<endl;
    system("pause");
    return 0;
}