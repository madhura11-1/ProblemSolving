#include<iostream>
using namespace std;

class A{
    int x = 90;
    public:
    void takex(){
        cout<<x;
    }
};

class B : virtual public A{
    public:
    void hello(){
        cout<<"give this";
    }

};

class C : virtual public A{
    public:
    void abc(){
        cout<<"abc";
    }
};

class D : public B,public C{
    public:
    void finalc(){
       cout<<"final";
    }
};

int main(){
    D d;
    d.abc();
    return 0;
}