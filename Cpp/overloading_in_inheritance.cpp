#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void fun1(){
        cout<<"A"<<endl;    }
};
class B : public A{
    public:
    void fun1(int k){
        cout<<"B"<<endl;                            //// if called fun() does not work
                                                    //// in cpp no overloading is possinle during inheritance but in java its possible with help of interfaces
    }                                               //// it will always consider the base calss function to be acted upon

};

int main(){
    B abc;
    abc.fun1(8.8);
    return 0;
}