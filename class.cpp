#include<iostream>
#include<assert.h>
using namespace std;

class A{
    public:
        int a;
        A(){
            a1=1;
            a2=2;
            a3=3;
            a = 4;
        }
        void fun(){
            cout << a << endl;
            cout << a1 << endl;
            cout << a2 << endl;
            cout << a3 << endl;
        }
    public:
       int a1; // 可以被子类继承，而且可以在main函数内访问
    protected:
       int a2; // 可以被子类继承，但是只能在子类内部访问
    private: 
       int a3; // 不能被子类继承

};

class B: public A
{
    public:
        int a;
        B(int i){
            A();
            a = i;
        }
        void fun(){
            cout << a << endl;
            cout << a1 << endl;
            cout << a2 << endl;
            cout << a3 << endl; //错误 因为子类无法继承基类的private
        }
};

int main()
{
    B b(10);
    cout << b.a << endl;
    cout << b.a1 << endl;
    cout << b.a2 << endl;
    cout << b.a3 << endl;
    
}










