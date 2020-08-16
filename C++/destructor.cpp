#include <iostream>
#include <string>

using namespace std;

/*
当父类执行析构函数时，子类的虚构函数不会执行，如果这时候有堆区空间，就会导致内存泄漏
*/

#if 1
class animal{
    public:
        animal(){
            cout<<"animal的构造函数"<<endl;
        };

        //如果不是虚函数的话，那么会优先执行父类的函数，从而无法实现重载

        virtual void speak() = 0;

        //虚析构函数可以解决子类内存释放不干净的问题

        virtual ~animal(){
            cout<<"animal的析构函数"<<endl;
        };
};

class cat: public animal{
    public:
        cat(string m_name){
            cout<<"cat的构造函数"<<endl;
            this->m_name = new string(m_name);
        }    

        void speak(){
            cout<<"cat "<<*m_name<<" is speaking"<<endl;
        }

        ~cat(){
            if (m_name != NULL){
                cout<<"cat的析构函数"<<endl;
                // delete [] m_name;   
                // m_name = NULL;             
            } 
        }
        string *m_name;

};

void test01(){
    animal *a1 = new cat("TOM");
    a1->speak();
    delete a1;
}

int main(){   

    test01();
    
    system("pause");
    return 0;
}
#endif
