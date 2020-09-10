// calculate the power of of x given power is n

#include <bits/stdc++.h>
using namespace std;


    double myPow(double x, int n) {
        
        if(n == 0){
            return 1.0;
        }
        if(n == 1){
            return x;
        }
        if(x == 1){
            return x;
        }
        
        if(n < 0){
            
            n = abs(n);
            
            if(n % 2 == 0){
                
                double ans = myPow(x,n/2);
                return 1/(ans*ans);
            }
            else{
                double ans = myPow(x,(n-1)/2);
                return 1/(ans*ans*x);
            }
        }
        else{
            
            if(n % 2 == 0){
                
                double ans = myPow(x,n/2);
                return (ans*ans);
            }
            else{
                double ans = myPow(x,(n-1)/2);
                return (ans*ans*x);
            }
        }
        
        return x;
        
    }

int main(){
    cout<<"Enter the number and its power to calculate"<<endl;
    int x,n;
    cin>>x>>n;
    myPow(x,n);
    return 0;
}