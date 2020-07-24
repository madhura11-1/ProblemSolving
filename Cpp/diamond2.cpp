#include<iostream>
using namespace std;

class A{
    public:
    void fun1(){
        cout<<"in A"<<endl;
    }
};
class B{
    public:
    void fun2(int k){                 //// even without argument not possible
        cout<<"in B"<<endl;
    }
};
class C{
    public:
    void fun2(){
        cout<<"in c"<<endl;                            ///// Not possible as it will give error ,same for solidity contracts where u have 
    }                                                  /////same functions name but different definitons in two contrcatsa and u try to inherit them in another contract;
};
class D : public B,public C{
    public:
    void fun3(){
        cout<<"in d"<<endl;
    }
};

int main(){
    D d;
    d.fun2();
    return 0;
}

