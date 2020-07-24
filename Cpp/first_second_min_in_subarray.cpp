#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the andXorOr function below.
 */
void andXorOr(vector<int> a) {

    stack<int> b;
    int ans = 0;
        for(int i=0;i<a.size();i++){
        while(!b.empty()){                          // this is used if an ele smaller than top of stack exists inside stack              
            cout<<a[i]<<" "<<b.top()<<endl;
            if(a[i] < b.top()){                      // when the current elemtn is min then the top of stack
                b.pop();                              // we pop the stack top as we no other ele further will
            }                                        // ever pair with the poped top to give a min pair.
            else{
                break;                               // if any bigger ele is encountered the loop breaks and pushes that 
                                                     // into stack as the prev stack ele will surely have pair with
            }                                        // someone next
        }
        b.push(a[i]);
    }
    }

int main(){
    vector<int> a = {9,6,3,5,2};
    andXorOr(a);
    return 0;
}