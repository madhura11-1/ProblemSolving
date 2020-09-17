#include <bits/stdc++.h>
using namespace std;

void SieveofEratosthenes(int n){                           // Complexity = Time : O(nlog(log(n))) 
                                                                         // space : O(n);
    bool check[n+1];
    for(int i=0;i<n+1;i++){
        check[i] = true;
    }
    for(int i=2;i*i<=n;i++){
        
        if(check[i] == true){
        for(int j= i*i;j<=n;j+=i){
            check[j] = false;
        }
        }
    }

    for(int i=2;i<=n;i++){
        if(check[i] == true){
            cout<<i<<" ";
        }
    }
}

int main(){
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
    SieveofEratosthenes(n);
    return 0;
}