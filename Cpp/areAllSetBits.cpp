#include <bits/stdc++.h>
using namespace std;

bool areAllBitsSet(int n) 
{ 
    // all bits are not set 
    if (n == 0) 
        return false; 
  
    // loop till n becomes '0' 
    while (n > 0) 
    { 
        // if the last bit is not set 
        if ((n & 1) == 0) 
            return false; 
  
        // right shift 'n' by 1 
        n = n >> 1; 
    } 
  
    // all bits are set 
    return true; 
} 

int main(){
     if(areAllBitsSet(1063)){
         cout<<"y";
     }
     return 0;
}