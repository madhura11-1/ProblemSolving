#include<iostream> 
using namespace std; 

class A 
{ 
public:
int x; 
public: 
/*A(){
                    if not fiven A() in line 35 then need to give a default constructor here.
}*/
A(int i) { x = i; 
              cout<<x<<endl;
       } 
void print() { cout << x; } 
}; 

class B: virtual public A 
{ 
public: 
B():A(78) {
    cout<<"im b"<<endl;
    cout<<x;
 } 
}; 

class C: virtual public A 
{ 
public: 
C():A(6) {
    cout<<"i am c"<<endl;
    cout<<x;
 } 
}; 

class D: public C, public B {
    public: 
    D():B(),C(),A(90){
          cout<<"im d"<<endl;
    }
}; 

int main() 
{ 
	D d; 
	d.print(); 
    B b;
	return 0; 
} 
