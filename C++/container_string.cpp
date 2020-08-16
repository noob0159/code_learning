#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

/*
string中的一些基础操作
1.string是一个类，类内部封装了char*，管理这个字符串
2.查找find、拷贝copy、删除delete、替换replace、插入insert
3.string的构造函数如下
    string()                    创建一个空字符串
    string(const char* s)       使用字符串s初始化
    string(const string& str)   使用str初始化
    string(int n, char c)       使用n个连续的c初始化
*/
int main(){
    // string str1 = string(5,'a');
    // cout<<str1<<endl;

    // 使用等号或者.assign处理字符串
    // string str2;
    // str2.assign("hello string", 5);
    // cout<<str2<<endl;
    // str2 = "hello c++";
    // cout<<str2<<endl;

    // 使用append或者+=拼接字符串
    string str3 = "I am ";
    str3 += "a boy";
    cout<<str3<<endl;
    str3.append(".");    
    cout<<str3<<endl;
    string str4 = "I like it.";

    //参数2是从哪个位置开始截取，参数3是截取几个数字
    str3.append(str4, 2, 4);
    cout<<str3<<endl;

    //find从左开始，rfind从右开始
    int pos1 = str3.find("boy");
    int pos2 = str3.find("like");
    str3.replace(pos2,4, "love");
    cout<<pos1<<endl;
    cout<<pos2<<endl;
    cout<<str3<<endl;

    //字符串比较，相等返回0，小于返回-1，大于返回1
    int c = str3.compare(str4);
    cout<<c<<endl;

    //字符串的插入和删除
    str3.insert(pos1-1,5,'a');
    cout<<str3<<endl;
    str3.insert(pos2,str4);
    cout<<str3<<endl;        
    str3.erase(pos2,str4.size());
    cout<<str3<<endl;
    str3.erase(pos1-1,5);
    cout<<str3<<endl;
    cout<<str3.substr(2,2)<<endl;

    //查邮箱用户名
    string str5 = "18210720159@fudan.edu.cn";
    int pos3 = str5.find("@");
    cout<<str5.substr(0,pos3)<<endl;

    system("pause");
    return 0;
}